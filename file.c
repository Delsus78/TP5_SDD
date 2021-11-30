#include<stdio.h>

typedef struct client{
	char nom [10] ;
	int t_arrivee ;
	int t_traitement ;
}client ;


typedef struct maillon
{
	struct maillon* tete ;
	struct maillon* queue ;
	client top ;
}cellule;


void initialiser (cellule * file){
	file -> tete = NULL ;
}

int top_file (cellule * file, client  * next){
	if (estVide (file) == 1){
		printf("Pile vide \n");
		return 0;
	}
	else{
		*next = file -> top ;
		return 1 ;
	}
}

int enfiler (cellule * file, client * new){
	if(estPleine (file) == 1){
		printf("Pile pleine : Error \n") ;
		return 0 ;
	}
	else{
		//*donnee = p -> 
	}
}

int defiler (cellule* file, client* donnee){

		return 0;
}
int estPleine (cellule* file){}
int estVide  (cellule * file){}