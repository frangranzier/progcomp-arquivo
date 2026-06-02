#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void limpaBuffer(){
    int c;
    while(c = getchar() != '\n' && c != EOF);
}

int main(){
    char char1;
    char string1[21];
    int i, contaLetras = 0;

    setlocale(LC_ALL, "portuguese");

    printf("Digite uma frase de até 20 caracteres: ");
    fgets(string1, sizeof(string1), stdin);
    limpaBuffer();

    string1[strcspn(string1, "\n")] = '\0';

    printf("Insira a letra que deseja buscar: ");
    char1 = toupper(getchar());
    limpaBuffer();

    for(i = 0; i < sizeof(string1); i++){
        if(toupper(string1[i]) == char1) {
            contaLetras++;
        }
    }

    printf("Na frase '%s', a letra '%c' aparece %i vezes.", string1, char1, contaLetras);
    
}