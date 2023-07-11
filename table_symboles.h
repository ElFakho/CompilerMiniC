#ifndef TABLE_SYMBOLES_H
#define TABLE_SYMBOLES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#define TAILLE 103


typedef struct _symbole{
    char *nom;
    int valeur;
    int is_array;
    int array_size;
    struct _symbole *suivant;
} symbole;

extern symbole *table[TAILLE];

// Function prototypes for the public API
int hash( char *nom );
void init_table();
void table_reset();
symbole * inserer( char *nom );
symbole * existe(char *nom);
void table_delete();

#endif /* SYMBOL_TABLE_H */
