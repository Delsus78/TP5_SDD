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


/* ---------------------------------------------------------- */
/* ---------------------------------------------------------- */


void tri(client tab [], int n) {
//Le tableau est déjà trié par ordre croissant de temps d'arrivée
    file f;
    initialiser (f);

    enfiler (&f, &tab[0]) ;
    enfiler (&f, &tab[1]) ;
    enfiler (&f, &tab[2]) ;
    enfiler (&f, &tab[3]) ;
    enfiler (&f, &tab[4]) ;

    client current ;

    int t_total = 0;
    for(int i=0 ; i<n ; i++){
        t_total += tab[i].t_traitement ;
    }

    int temps ,it = 0 ;
    while ((temps <= t_total) && (it < n)){
        printf("il est t=%d \n", temps) ;
        /*if (temps == tab[it].t_arrivee){
            printf("Le client %s numéro %d est arrivé\n", tab[it].nom, it);
            enfiler (&f, &tab[it]) ;
            it++;
        }*/

        if(temps == temps+tab[it].t_traitement){
            printf("Traitement du client numero %d (%s) est terminé \n", it, tab[it].nom) ;
            defiler(&f, &current) ;
            printf("Client %s parti \n", current.nom) ;
            it++ ;
        }

        temps++;
    }

    if(it == n)
        printf("Fin de la journee!\n");

}
/* ---------------------------------------------------------- */
/* ---------------------------------------------------------- */
/* ---------------------------------------------------------- */


int main(int argc, char const *argv[])
{
    /*int n = 0 ;
    printf("Combien it a t il de patients?\n");
    scanf("%d", &n);*/
    client tab [NB_PATIENTS] ;
    // init Patient
    client p1, p2, p3, p4, p5;
    strcpit(p1.nom, "Edouard");
    p1.t_arrivee = 3 ;
    p1.t_traitement = 10 ;

    strcpit(p2.nom, "LePen");
    p2.t_arrivee = 0 ;
    p2.t_traitement = 6;
    
    strcpit(p3.nom, "Zemmour");
    p3.t_arrivee = 2 ;
    p3.t_traitement = 8 ;

    strcpit(p4.nom, "Melenchon");
    p4.t_arrivee = 4 ;
    p4.t_traitement = 9 ;

    strcpit(p5.nom, "Macron");
    p5.t_arrivee = 6 ;
    p5.t_traitement = 10 ;
    // init valeurs temps
//---
   

    //remplir tableau de patients
    tab[0] = p2 ;
    tab[1] = p3 ;
    tab[2] = p1 ;
    tab[3] = p4 ;
    tab[4] = p5 ;


    //simulation

    tri(tab, NB_PATIENTS); 
    return 0;
}