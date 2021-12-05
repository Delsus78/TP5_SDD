#include<stdio.h>
#include<stdlib.h>

typedef struct client{
	char nom [10] ;
	int t_arrivee ;
	int t_traitement ;
}client ;


typedef struct maillon
{
	client client;
	struct cellule * suivant;
}cellule;

typedef struct file{
	cellule * tete;
	cellule * queue;
	client top; //tete de file: premier element à supprimer 
}file;


void initialiser (file f){
	f.tete = NULL ;
	f.queue = NULL ;
}

int top_file (file f, client  * next){
	if (estVide (f) == 1){
		printf("Pile vide \n");
		return 0;
	}
	else{
		*next = f.tete->client ;
		return 1 ;
	}
}

int estPleine (file f){
	return 0; //Une file n'est jamais pleine dans cette implémentation
}


int estVide  (file f){
	return (f.tete==NULL) ;
}

int enfiler (file * pfile, client * new){
	if(estPleine (*pfile) == 1){
		printf("Pile pleine : Error \n") ;
		return 0 ;
	}
	else if (estVide(*pfile)){
		//crée une nouveau maillon à relier à liste chaînée
		cellule *N = malloc(sizeof(cellule)) ;
		//remplit le nouveau maillon
		N->client = *new ;
		N->suivant = NULL;
		pfile->tete = N ;
		pfile->queue= N ;
	}
	else{
		//crée une nouveau maillon à relier à liste chaînée
		cellule *N = malloc(sizeof(cellule)) ;
		//remplit le nouveau maillon
		N->client = *new ;
		N->suivant = NULL;
		cellule * temp = pfile -> queue;
		temp->suivant = new;
		pfile->queue = N ;
	}

	pfile->top = pfile->tete->client ;
	return 1 ; 

}

int defiler (file * pfile, client * pClient){
	if (estVide(*pfile)==1){
		printf("Erreur! File vide\n");
		return 0;
	}
	else {
		//renseigne le client que je veux supprimer (top)
		*pClient = pfile->top ;
		//création cellule temporaire pour rupture de la chaîne
		cellule * temp = pfile->tete;
		pfile->tete = temp->suivant; //Le second maillon devient La tete de file 
		pfile->top = pfile->tete->client  ; 
		//Retrait de L'ancienne tete de file de la chaîne
		temp->suivant = NULL ;	
		return 1;
	}
}
