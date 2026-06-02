#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void limpaBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int quantA = 0;
    char inputStr[21];
    int i;

    printf("Insira uma frase de até 21 caractéres: ");
    fgets(inputStr, sizeof(inputStr), stdin);
    limpaBuffer();

    inputStr[strcspn(inputStr, "\n")] = '\0';

    system("clear");

    for(i = 0; i < sizeof(inputStr); i++){
        if(toupper(inputStr[i]) == 'A'){
            quantA++;
        }
    }

    printf("Na frase '%s', há %i ocorrências da letra a.\n", inputStr, quantA);
    return 0;
}