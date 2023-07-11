%{

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <assert.h>


#include "table_symboles_fonctions.h"
#include "table_symboles.h"
#include "node.h"




int yylex();
int yylineno;

List_Node* noeuds;
char* ellipse = "ellipse";
char* box = "box";
char* invtrapezium = "invtrapezium";
char* septagon = "septagon";
char* trapezium = "trapezium";
char* blue = "blue";
char* diamond = "diamond";

int nbr_erreur = 0;

void yyerror(char *s) {
    fprintf(stderr, "* Erreur \"%s\", à la ligne %d: \n", s, yylineno);
    nbr_erreur++;
}


%}

%token <var> IDENTIFICATEUR
%token <val> CONSTANTE
%token <var> VOID INT FOR WHILE IF ELSE SWITCH CASE DEFAULT


%token BREAK RETURN PLUS MOINS MUL DIV LSHIFT RSHIFT BAND BOR LAND LOR LT GT 
%token GEQ LEQ EQ NEQ NOT EXTERN
%left PLUS MOINS
%left MUL DIV
%left LSHIFT RSHIFT
%left BOR BAND
%left LAND LOR
%nonassoc THEN
%nonassoc ELSE
%left OP
%left REL


%union{
    char* var; 
	int val;
	List_Node* nodes;
	Node* node;
	liste_t* listeT;
};

%{
	#include "table_symboles_fonctions.c"
	#include "table_symboles.c" 
	#include "node.c"
	/*table* init_table; //table de symbole */
%}



%type <var> type binary_comp binary_op binary_rel declarateur liste_declarations liste_declarateurs declaration
%type <val> liste_parms
%type <nodes> liste_fonctions liste_instructions liste_expressions instruction switch_cases bloc programme
%type <node> fonction iteration selection case_clause default_clause saut affectation appel variable condition expression
%type <listeT> parm

%start programme
%%
programme	:	
		liste_declarations liste_fonctions {printf("variables declarees : %s", $1);noeuds=$2;}
;
liste_declarations	:	
		liste_declarations declaration {
			$$ = append(2,$1,$2);
		}
	|	{$$ = "";}
;
liste_fonctions	:	
		liste_fonctions fonction {$$ = add_to_list($2,$1);}
|               fonction {$$ = add_to_list($1,create_empty_list());}
;
declaration	:	
		type liste_declarateurs ';' {
			if(strcmp($1,"void")==0){
                yyerror("déclaration avec void");
                printf("Le type void ne correspond pas aux déclarations !\n");
			}else{
				$$ = append(4, $1, " ", $2, ";");
			}
	}
;
liste_declarateurs	:	
		liste_declarateurs ',' declarateur {
											$$ = append(3,$1,", ",$3);
											}
	|	declarateur {
					$$ = $1;
					}
;
declarateur	:	
		IDENTIFICATEUR { 
		symbole *s = existe($1);
		if (s == NULL){
			symbole *s = inserer($1);
			s->nom = $1;
			$$ = $1;
		}else{
			yyerror("la variable existe deja");
		}
	}
	|	declarateur '[' CONSTANTE ']' {
			symbole *s = existe($1);
			if (s != NULL){
				symbole *s = inserer($1);
				s->nom = $1;
        		s->is_array = 1;
        		s->array_size = $3;
        		$$ = $1;
			}else{
				yyerror("la variable existe deja");
		}
	}
;
fonction	:	
		type IDENTIFICATEUR '(' liste_parms ')' '{' liste_declarations liste_instructions '}' {
			fonction_t *f = existe_fonction($1,$2,$4);
			if (f == NULL){
				ajouter_fonction($1, $2, $4);
				$$ = create_node(append(3, $2, ",", $1), invtrapezium, NULL, "blue", 1, $8);
			}else{
				yyerror("La fonction est deja definie");
			}

		}
	|	EXTERN type IDENTIFICATEUR '(' liste_parms ')' ';' {
			fonction_t *f = existe_fonction($2,$3,$5);
			if (f == NULL){
				ajouter_fonction($2,$3,$5);
				$$ = create_node(append(4,"EXTERN ", $3, ",", $2), invtrapezium, NULL, "blue", 0);
			}else{
				yyerror("La fonction est deja definie");
			}
		}
;
type	:	
		VOID {$$ = "void";}
	|	INT {$$ = "int";}
;
liste_parms	:	
		liste_parms ',' parm {$$ = $1 + compter_elements($3) ;}
	|	{$$ = list_length(create_empty_list());}
;
parm	:	
		INT IDENTIFICATEUR {param_t param;
							param.type = "int"; 
							param.nom = $2; 
							$$ = creer_liste(param); 
							}
;
liste_instructions :	
		liste_instructions instruction {$$ = append_lists($2,$1);}
	| { $$ = create_empty_list();}
;
instruction	:	
		iteration {$$ = create_list($1);}
	|	selection {$$ = create_list($1);}
	|	saut {$$ = create_list($1);}
	|	affectation ';' {$$ = create_list($1);}
	|	bloc {$$ = $1;}
	|	appel ';' {$$ = create_list($1);}
;
iteration	:	
		FOR '(' affectation ';' condition ';' affectation ')' instruction { $$ = create_node("FOR", ellipse, NULL, NULL,4,$3,$5,$7,$9);}
	|	WHILE '(' condition ')' instruction { $$ = create_node("WHILE", ellipse, NULL, NULL,2,$3,$5);}
;
selection	:	
		IF '(' condition ')' instruction %prec THEN { $$ = create_node("IF", diamond, NULL, NULL,2, $3,$5);}
	|	IF '(' condition ')' instruction ELSE instruction { $$ = create_node("IF", diamond, NULL, NULL,3, $3,$5,$7);}
	|	SWITCH '(' expression ')' '{' switch_cases '}' { 
        	/* Convert linked list of switch_cases into array of pointers */
        	Node** casesArray = convert_to_array(append_lists(create_list($3),$6));
        	int num_cases = list_length($6)+1;
			Node* switch_node = create_node_array("SWITCH", ellipse, NULL, NULL, num_cases, casesArray);
			free(casesArray);
        	$$ = switch_node;
    		}
    		;
switch_cases :
    case_clause switch_cases {
        /* Create a linked list of case nodes */
        $$ = add_to_list($1, $2);
    }
    | default_clause {
        $$ = create_list($1);
    }
    ;

case_clause :
    CASE CONSTANTE ':' instruction {
        $$ = create_node("CASE", NULL, NULL, NULL, 1, $4);
    }
    ;

default_clause :
    DEFAULT ':' instruction {
        $$ = create_node("DEFAULT", NULL, NULL, NULL, 1, $3);
    }
    ;
;
saut	:	
		BREAK ';' {$$ = create_node("BREAK", box, NULL,NULL,0);}
	|	RETURN ';' {$$ = create_node("RETURN", trapezium, NULL, blue,0);}
	|	RETURN expression ';' {$$ = create_node("RETURN", trapezium, NULL, blue,1,$2);}
;
affectation	:	
		variable '=' expression { 
				$$ = create_node(":=", NULL, NULL, NULL, 2, $1, $3); 
				}
;
bloc	:	
		'{' liste_declarations liste_instructions '}' {$$ = $3;}
;
appel	:	
		IDENTIFICATEUR '(' liste_expressions ')' ';' {
			fonction_t* f = existe_fonction("void",$1, list_length($3));
			if (f != NULL) {
				$$ = create_node_array($1,septagon,NULL,NULL,list_length($3),convert_to_array($3));
			}else{
				fonction_t* f2 = existe_fonction("int",$1, list_length($3));
				if (f != NULL) {
					$$ = create_node_array($1,septagon,NULL,NULL,list_length($3),convert_to_array($3));
				}else{
					yyerror("La fonction n'existe pas, verifiez le nom ou le nombre de paramètres");
				}
			}
		}
;
variable	:	
		IDENTIFICATEUR {
			symbole *s = existe($1);
        	if (s != NULL && s->is_array == 1) {
            	yyerror("Array used without index");
        	}
        	$$ = create_node($1, ellipse, NULL, NULL, 0);}
	|	variable '[' CONSTANTE ']'  {
        	$$ = create_node("TAB", ellipse, NULL, NULL, 2, $1, $3); 
		}
;
expression	:	
		'(' expression ')' {$$ = $2;}
	|	expression binary_op expression %prec OP {$$ = create_node($2,ellipse,NULL,NULL,2,$1,$3);
			  									 } 
	|	CONSTANTE {
		char ss[] = "X";
		ss[0] = $1 + '0';
		$$ = create_node(ss,ellipse,NULL,NULL,0);
		}
	|	variable {$$ = $1;}
	|	IDENTIFICATEUR '(' liste_expressions ')' {$$ = create_node_array($1,septagon,NULL,NULL,list_length($3),convert_to_array($3));}
;
liste_expressions	:	
		liste_expressions ',' expression {$$ = append_lists($1,create_list($3));}
	|	{$$ = create_empty_list();}
;
condition	:	
		NOT '(' condition ')' {$$ = create_node("!",ellipse,NULL,NULL,1,$3);
			  				  }
	|	condition binary_rel condition %prec REL {$$ = create_node($2,ellipse,NULL,NULL,2,$1,$3);
			  									 }
	|	'(' condition ')' {$$ = $2;
			  			  }
	|	expression binary_comp expression {$$ = create_node($2,ellipse,NULL,NULL,2,$1,$3);
			  							  }
;
binary_op	:	
		PLUS {$$ = "+";
			 }
	|   MOINS {$$ = "-";
			   }
	|	MUL {$$ = "*";
			 }
	|	DIV {$$ = "/";
			 }
	|   LSHIFT {$$ = "<<";
			 }
	|   RSHIFT {$$ = ">>";
			 }
	|	BAND {$$ = "&";
			 }
	|	BOR {$$ = "|";
			 }
;
binary_rel:	
		LAND {$$ = "&&";
			 }
	|	LOR	 {$$ = "||";
			 }
;
binary_comp:	
		LT	{$$ = "<";
			}
	|	GT	{$$ = ">";
			}
	|	GEQ	{$$ = ">=";
			}
	|	LEQ	{$$ = "<=";
			}
	|	EQ	{$$ = "==";
			}
	|	NEQ	{$$ = "!=";
			}
;
%%
int main() {
    yyparse();
	init_table();
	init_table_fonctions();
	print_dot(create_node_array("programme",ellipse,NULL,NULL,list_length(noeuds),convert_to_array(noeuds)));
	table_fonctions_delete();
	table_delete();
    return 0;
}

