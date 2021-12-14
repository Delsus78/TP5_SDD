#include "arbre.h"

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

int main() { 
    noeud_t *myTree = NULL; // empty tree
    myTree = insertTree(myTree, 50); 
    myTree = insertTree(myTree, 45); 
    myTree = insertTree(myTree, 65); 
    myTree = insertTree(myTree, 55);
    myTree = insertTree(myTree, 54); 
    myTree = insertTree(myTree, 56); 
    myTree = insertTree(myTree, 80);
    myTree = insertTree(myTree, 70); 
    myTree = insertTree(myTree, 85);
    myTree = insertTree(myTree, 30);
    myTree = insertTree(myTree, 47) ;
    
    
    inorderTree(myTree, 0); 
    preorderTree(myTree, 0); 
    postorderTree(myTree, 0);
    
    printf("max = %d\n", maxTree(myTree)); 
    printf("min = %d\n", minTree(myTree)); 
    printf("nb of nodes = %d\n", nbNodesTree(myTree)); 
    printf("height tree = %d\n\n", heightTree(myTree));
    breadthTree(myTree);
    printf("search for 55 = %d\n", searchTree(myTree, 55)->valeur);
    noeud_t *pnd = searchTree(myTree, 77);
    printf("search for 77 = %p\n", pnd);
    myTree = removeTree(myTree, 65) ;
}