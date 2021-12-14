#include "stdio.h"
#include "stdlib.h"

typedef struct noeud{
    int valeur;
    struct noeud_t* fils_gauche;
    struct noeud_t* fils_droit;
} noeud_t;

//Un arbre est un pointeur sur la racine (noeud de base)

noeud_t *insertTree(noeud_t *ptree, int val) ; // add val to the tree & return the new tree
void inorderTree(noeud_t *ptree, int lvl) ; // inorder traversal of tree 
void preorderTree(noeud_t *ptree, int lvl) ; //preorder traversal of tree 
void postorderTree(noeud_t *ptree, int lvl); //postorder traversal of tree
void breadthTree(noeud_t *ptree) ; // breadth first traversal of tree
int maxTree(noeud_t *ptree) ; // find max value in tree 
int minTree(noeud_t *ptree) ; // find min value in tree 
int heightTree(noeud_t *ptree) ; // returns the height of the tree
int nbNodesTree(noeud_t *ptree) ; // returns the numbre of nodes in the tree
noeud_t *searchTree(noeud_t *ptree, int val) ; // search for val in the tree and return the node 
noeud_t *removeTree(noeud_t *ptree, int val) ; // remove val from tree and return the new tree