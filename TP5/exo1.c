#include "file.c"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#define NB_PATIENTS 5

/* *********AJOUT IMPLEMENTATIONS FILES ************* */
/*                                                    */
/*                                                    */
/*                                                    */
/*                                                    */
/*                                                    */
/*--------------------------------------------------- */
/*--------------------------------------------------- */




/* ---------------------------------------------------------- */
/* ---------------------------------------------------------- */
void simulation(client tab [], int n) {
//Le tableau est déjà trié par ordre croissant de temps d'arrivée
    file f;
    initialiser (f);

    enfiler (&f, &tab[0]) ;
    enfiler (&f, &tab[1]) ;
    enfiler (&f, &tab[2]) ;
    enfiler (&f, &tab[3]) ;
    enfiler (&f, &tab[4]) ;

    client current ;

    int t_total = 0, i=0 ;
    for(int i=0 ; i<n ; i++){
        t_total += tab[i].t_traitement ;
    }

    i=0 ;

    int temps=0 , examination_time =0 ;
    while ((temps < t_total) && (i < n)){

        printf("il est t=%d\n", temps) ;


        if( (i == 0) && (temps == tab[i].t_traitement) ){
            printf("Traitement du client numero %d (%s) est terminé \n", i, tab[i].nom) ;
            defiler(&f, &current) ;
            printf("Client %s parti \n", current.nom) ;

            examination_time += tab[i].t_traitement ;
            printf("***********************************\n") ;

            i++ ;
        }

        else if(temps == examination_time+tab[i].t_traitement && i!=0){
            printf("Traitement du client numero %d (%s) est terminé \n", i, tab[i].nom) ;
            defiler(&f, &current) ;
            printf("Client %s parti \n", current.nom) ;
            i++ ;
            examination_time = temps ;
            printf("***********************************\n") ;

        }

        temps++;
    }
     

    if(i == n)
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
    strcpy(p1.nom, "Edouard");
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
    p5.t_arrivee = 6 ;
    p5.t_traitement = 4 ;
    // init valeurs temps
//---
   

    //remplir tableau de patients
    tab[0] = p2 ;
    tab[1] = p3 ;
    tab[2] = p1 ;
    tab[3] = p4 ;
    tab[4] = p5 ;


    //simulation

    simulation(tab, NB_PATIENTS); 
    return 0;
}