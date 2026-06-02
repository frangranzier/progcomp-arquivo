#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void limpaBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    char string1[6], string2[6];
    int tamReal, i;

    printf("Insira uma palavra de ate 5 letras: ");
    fgets(string1, sizeof(string1), stdin);
    limpaBuffer();

    tamReal = strcspn(string1, "\n");
    string1[tamReal] = '\0';

    for(i = 0; i < tamReal; i++){
        string2[i] = string1[(tamReal - 1) - i];
    }
    string2[tamReal] = '\0';

    printf("String original: %s\n", string1);
    printf("String invertida: %s\n", string2);
    return 0;
}