#include "string.h"
#include <stdio.h>

char* cut(const char * strToCut,int start, int end) {
    char* part;
    if (end < strlen(strToCut)) {
        for (size_t i = start; i < end; i++) {
            char temp[2];
            temp[0] = strToCut[i];
            printf(temp);
            strcat(part,temp);
        }
    } else {
        printf("error");
    }
    return part;
}

int getsymb(char * str, int length) {
    int valid = 1;


    return valid;
}

int expr(char * str, int length) {
    int valid = 1;
    char* part;
    if (length > 0 ) {
        
        //term(part,);

    } else valid = 0;




    return valid;
}


int factor(char *str, int length) {
    int valid = 0;

    if(str == "a") {
        valid = 1;
    } else if (str[0] = '(') {
        char * part = cut(str,1,length-1);
        
        printf("%s",part);
        printf("\n");
        expr(part,strlen(part));
    }

    return valid;
}

int term(char *str, int length) {
    int valid = 1;
    char* part;

    factor(part,strlen(part));

    return valid;
}

int main(int argc, char *argv[])
{

    if(argc == 2) {
        char* text = argv[1];
        int tailleText = strlen(text);
        factor(text,tailleText);

        // Valide ou non
        /*if (expr(text,tailleText) == 1) {
            printf("Le text est valide.");
        } else {
            printf("Le text n'est pas valide.");
        }*/
    }

    return 0;
}
