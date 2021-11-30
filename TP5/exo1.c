#include "file.c"
#include "stdlib.h"
#include "stdio.h"
#define NB_PATIENTS 5

/* *********AJOUT IMPLEMENTATIONS FILES ************* */
/*                                                    */
/*                                                    */
/*                                                    */
/*                                                    */
/*                                                    */
/*--------------------------------------------------- */
/*--------------------------------------------------- */

/*void initStr (char * str) {
    int n = strlen (str) ;
    int i =0 ;
    for(i=0; i<n; i++){
        
    }
}*/

tri(client tab [], int n) {
//Le tableau est déjà trié par ordre croissant de temps d'arrivée
    file f;
    cellule c1, c2, c3, c4, c5 ;
    c1.client = tab [0] ;
    c2.client = tab [1] ;
    c3.client = tab [2] ;
    c4.client = tab [3] ;
    c5.client = tab [4] ;

    /*c1.suivant = &c2 ;
    c2.suivant = &c3 ;
    c3.suivant = &c4 ;
    c4.suivant = &c5 ;
    c5.suivant = NULL ;*/

    initialiser (f);
    enfiler(&f, &c1) ;
    enfiler (&f, &c2) ;


}

int main(int argc, char const *argv[])
{
    /*int n = 0 ;
    printf("Combien y a t il de patients?\n");
    scanf("%d", &n);*/
    client tab [NB_PATIENTS] ;
    // init Patient
    client p1, p2, p3, p4, p5;
    strcpy(p1.nom, "Hollande");
    p1.t_arrivee = 3 ;
    p1.t_traitement = 10 ;

    strcpy(p2.nom, "LePen");
    p2.t_arrivee = 0 ;
    p2.t_traitement = 6;
    
    strcpy(p3.nom, "Zemmour");
    p3.t_arrivee = 2 ;
    p3.t_traitement = 8 ;

    strcpy(p4.nom, "Melenchon");
    p4.t_arrivee = 4 ;
    p4.t_traitement = 9 ;

    strcpy(p5.nom, "Macron");
    p5.t_arrivee = 0 ;
    p5.t_traitement = 10 ;
    // init valeurs temps
//---
   

    //remplir tableau de patients
    tab[0] = p2 ;
    tab[1] = p3 ;
    tab[2] = p1 ;
    tab[3] = p4 ;
    tab[4] = p5 ;

    //file triée
    tri(tab, NB_PATIENTS); 

    return 0;
}