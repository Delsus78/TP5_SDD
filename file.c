#include<stdio.h>

typedef struct maillon
{
	struct maillon* tete ;
	struct maillon* queue ;
	float top ;
}cellule;



void initialiser (cellule * file){
	file -> tete = NULL ;
}

int top_file (cellule * file, int  * top){
	if (estVide (file) == 1){
		printf("Pile vide \n");
		return 0;
	}
	else{
		*top = file -> top ;
		return 1 ;
	}
}

int enfiler (cellule * file, int * donnee){
	if(estPleine (file) == 1){
		printf("Pile pleine : Error \n") ;
		return 0 ;
	}
	else{
		//*donnee = p -> 
	}
}

int defiler (cellule* file, int* donnee){
	return 0;
}
int estPleine (cellule* file){}
int estVide  (cellule * file){}