#ifndef TABLE_SYMBOLES_FONCTIONS_H
#define TABLE_SYMBOLES_FONCTIONS_H


#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "table_symboles.h"


#define TAILLE 103


typedef struct _param_t {
  char *type;
  char *nom;
} param_t;

typedef struct _liste_t {
  param_t param;
  struct _liste_t *suivant;
} liste_t;

typedef struct _fonction_t {
  char *type;
  char *nom;
  int nb_params;
  struct _fonction_t *suivant;
} fonction_t;


extern fonction_t *table_fonctions[TAILLE];


void init_table_fonctions();
liste_t *creer_liste( param_t p );
int compter_elements(liste_t *liste);
liste_t *concatener_listes( liste_t *l1,  liste_t *l2 );
fonction_t *ajouter_fonction( char *type, char *nom, int nb_params );
fonction_t * existe_fonction( char *type, char *nom, int nb_params );
void table_fonctions_delete();

#endif /* TABLE_SYMBOLES_FONCTIONS_H*/
