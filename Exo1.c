#include<stdio.h>

typedef struct maillon
{
	struct maillon* tete ;
	struct maillon* queue ;
	float top ;
}cellule;


/*typedef struct file{
	cellule * 
}file ;*/

void initialiser (cellule * file){
	file -> tete = NULL ;
}

int top_file ()