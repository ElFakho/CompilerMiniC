#include "table_symboles.h"


#define TAILLE 103

symbole *table[TAILLE];



int hash( char *nom ) {
  int i, r;
  int taille = strlen(nom);
  r = 0;
  for ( i = 0; i < taille; i++ )
    r = ((r << 8) + nom[i]) % TAILLE;
  return r;
}

void init_table() {
  int i;
  for( i = 0; i < TAILLE; i++ )
    table[i] = NULL;
}


void table_reset() {
  int i;
  for( i = 0; i < TAILLE; i++ )
    table[i] = NULL;
}

symbole * inserer( char *nom ) {
  int h;
  symbole *s;
  symbole *precedent;
  h = hash(nom);
  s = table[h];
  precedent = NULL;
  while ( s != NULL ) {
    if ( strcmp( s->nom, nom ) == 0 )
      return s;
    precedent = s;
    s = s->suivant;
  }
  if ( precedent == NULL ) {
    table[h] = (symbole *) malloc(sizeof(symbole));
    s = table[h];
    }
    else {
        precedent->suivant = (symbole *) malloc(sizeof(symbole));
        s = precedent->suivant;
    }
    s->nom = strdup(nom);
    s->is_array = 0;
    s->array_size = -1;
    s->valeur = 0; 
    s->suivant = NULL;
    return s;
}

symbole * existe(char *nom) {
    int h = hash(nom);
    symbole *s = table[h];

    while (s != NULL) {
        if (strcmp(s->nom, nom) == 0)
            return s; 
        s = s->suivant;
    }


    return NULL;
}


void table_delete() {
  int i;
  for(i = 0; i < TAILLE; i++) {
    symbole *s = table[i];
    while(s != NULL) {
      symbole *temp = s;
      s = s->suivant;
      free(temp->nom);
      free(temp);
    }
  }
}
