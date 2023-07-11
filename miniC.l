D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)*

%{
#include <stdio.h>
#include "table_symboles_fonctions.h"
#include "table_symboles.h"
#include "node.h"
#include "y.tab.h"


/* Ne g�re pas les commentaires. A rajouter */
/* Supprimer les lignes dont vous n'avez pas besoin. */

%}

%option yylineno
%option noyywrap

%%
"break"                 { return BREAK;}
"case"                  { return CASE;}
"const"                 { return CONSTANTE;}
"default"               { return DEFAULT;}
"else"                  { return ELSE;}
"extern"                { return EXTERN;}
"for"                   { return FOR;}
"if"                    { return IF;}
"then"                  { return THEN;}
"int"                   { return INT;}
"return"                { return RETURN;}
"switch"                { return SWITCH;}
"void"                  { return VOID;}
"while"                 { return WHILE;}

{L}({L}|{D})*           { yylval.var = strdup(yytext); return IDENTIFICATEUR; }
{D}+                    { yylval.val = atoi(yytext); return CONSTANTE;}

"+"                     { return PLUS;}
"-"                     { return MOINS;}
"*"                     { return MUL;}
"/"                     { return DIV;}

"&"                     { return BAND;}
"&&"                    { return LAND;}

"||"                    { return LOR;}
"|"                     { return BOR;}

"!"                     { return NOT;}

">>"                    { return LSHIFT;}
"<<"                    { return RSHIFT;}

"<="                    { return LEQ;}
">="                    { return GEQ;}
"=="                    { return EQ;}
"!="                    { return NEQ;}

"="                     { return '=';}

":"        				{ return ':';}
";"     			   	{ return ';';}
"("                     { return '(';}
")"                     { return ')';}
"{"                     { return '{';}
"}"                     { return '}';}
"["       			 	{ return '[';}
"]"        				{ return ']';}

"/*"([^*]|"**"+[^*/])*"*/"    { ; }

[ \t\v\n\f]             { ; }
.                       { return yytext[0]; }

%%

