#include "stdio.h"
#include "stdlib.h"

typedef struct noeud{
    int valeur;
    struct noeud* fils_gauche, fils_droit ;
} noeud ;

//Un arbre est un pointeur sur la racine (noeud de base)

