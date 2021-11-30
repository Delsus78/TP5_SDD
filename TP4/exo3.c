#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A la fin du jeu les tours A et B doivent être vides
//Pour N=2 :
/*
Départ : A-> 1,2  |  B->__ |  C__
Phase 1: A -> 2   |  B->1	| C-> __
Phase 2: A->__	  |  B->1	| C-> 2
Phase 3: A->__	  |  B->__	| C-> 1,2

*/
//Pour N=3
/*
Départ : A-> 1,2,3  |  B->__ |  C__
Phase 1: A -> 2,3   |  B->__ | C-> 1
Phase 2: A->3	  |  B->2	| C-> 1
Phase 3: A->__	  |  B->1,2	| C-> 3
Phase 4: A->1	  |	 B->2	| C->3
Phase 5: A->1	  |	 B->__	| C->2,3
Phase 6: A->__	  |	 B->__	| C->1,2,3

*/

//Solution récursive :
void hanoi(int n, char piquetDebut, char piquetFin, char piquetLibre) {
    if (n > 0) {
        hanoi(n-1,piquetDebut,piquetLibre,piquetFin);
        printf("Tour %c a tour %c\n",piquetDebut,piquetFin);
        hanoi(n-1,piquetLibre,piquetFin,piquetLibre);
    }
}

int main(int argc, char *argv[])
{
    
    if (argc == 2) {
        int n = atoi(argv[1]);

        hanoi(n,'A','C','B');
    }

    return 0;
}
    
