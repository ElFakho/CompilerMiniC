#include "table_symboles_fonctions.h"

liste_t *creer_liste( param_t p );
liste_t *concatener_listes( liste_t *l1,  liste_t *l2 );
void afficher_liste(liste_t *liste);
int listes_egales(liste_t *l1, liste_t *l2);

#define TAILLE 103


fonction_t *table_fonctions[TAILLE];


void init_table_fonctions() {
  int i;
  for( i = 0; i < TAILLE; i++ )
    table_fonctions[i] = NULL;
}

liste_t *creer_liste( param_t p ) {
  liste_t *liste;
  liste = (liste_t *) malloc(sizeof( liste_t ));
  assert( liste != NULL );
  liste->param = p;
  liste->suivant = NULL;
  return liste;
}

int compter_elements(liste_t *liste) {
  int count = 0;
  liste_t *l;
  for (l = liste; l != NULL; l = l->suivant) {
    count++;
  }
  return count;
}

liste_t * concatener_listes( liste_t *l1,  liste_t *l2 ) {
  liste_t *l = l1;
  if ( l1 == NULL )
    return l2;
  while ( l->suivant != NULL )
    l = l->suivant;
  l->suivant = l2;
  return l1;
}




fonction_t * ajouter_fonction( char *type, char *nom, int nb_params ) {
  int h;
  fonction_t *f;
  fonction_t *precedent;
  h = hash(nom);
  f = table_fonctions[h];
  precedent = NULL;
  while (f != NULL) {
    if (strcmp(f->nom, nom) == 0) {
      if (f->type == type && f->nb_params == nb_params) {
        printf("Re-déclaration cohérente de la fonction %s\n", f->nom);
        return f;
      } else {
        printf("Re-déclaration incohérente de la fonction %s\n", f->nom);
        return NULL;
      }
    }
    precedent = f;
    f = f->suivant;
  }
  fonction_t *nouvelle_fonction = (fonction_t *)malloc(sizeof(fonction_t));
  assert(nouvelle_fonction != NULL);
  if (precedent == NULL) {
    table_fonctions[h] = nouvelle_fonction;
    f = table_fonctions[h];
  } else {
    precedent->suivant = nouvelle_fonction;
    f = precedent->suivant;
  }
  f->type = type;
  f->nom = strdup(nom);
  f->nb_params = nb_params;
  f->suivant = NULL;
  return f;
}


fonction_t * existe_fonction(char *type, char *nom, int nb_params) {
  int h = hash(nom);
  fonction_t *f = table_fonctions[h];
  while (f != NULL) {
    if (strcmp(f->nom, nom) == 0 && f->type == type && f->nb_params == nb_params)
      return f; 
    f = f->suivant;
  }
 
  return NULL;
}

void table_fonctions_delete() {
  int i;
  for (i = 0; i < TAILLE; i++) {
    fonction_t *f = table_fonctions[i];
    while (f != NULL) {
      fonction_t *temp = f;
      f = f->suivant;
      free(temp->nom);
      free(temp);
    }
  }
}
