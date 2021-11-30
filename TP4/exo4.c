#include "string.h"
#include <stdio.h>

int expr(char * str, int length, int* pos);

int factor(char *str, int length, int* pos) {
    int valid = 1;

    if (str[*pos] != 'a') {
        if (str[*pos] != '(') {
            valid = 0; // pas de parenthese ni de a, pas bon
        } else {
            // parenthese trouvé, on check une expression
            *pos = *pos + 1;
            if (expr(str,length,pos) == 1) {
                if (str[*pos] == ')') { // deuxieme parenthèse
                    *pos = *pos + 1;
                } else valid = 0;
            } else valid = 0;
        }
    } else { // si c'est un a, on passe au symbole suivant
        *pos = *pos + 1;
    }

    return valid;
}

int term(char *str, int length, int* pos) {
    int valid = 1;
    if (factor(str,length,pos) == 1) {
        if(str[*pos] == '*') {
            *pos = *pos + 1;
            if (factor(str,length,pos) != 1) {
                valid = 0;
            }
        }
    } else {
        valid = 0;
    }

    return valid;
}

int expr(char * str, int length, int* pos) {
    int valid = 1;

    if (term(str,length,pos) == 1) {
        if(str[*pos] == '+') {
            *pos = *pos + 1;
            if (term(str,length,pos) != 1) {
                valid = 0;
            }
        }
        
    } else {
        valid = 0;
    }

    return valid;
}

int test(char* str, int length, int* pos ) {
    int valid = 0;
    if (expr(str,length,pos) == 1 && length == *pos) {
        valid = 1;
    }
    return valid;
}

int main(int argc, char *argv[])
{

    if(argc == 2) {
        char* text = argv[1];
        int tailleText = strlen(text);
        
        int pos = 0;

        // Valide ou non
        if (test(text,tailleText,&pos) == 1) {
            printf("Le text est valide.");
        } else {
            printf("Le text n'est pas valide.");
        }
    }

    return 0;
}
