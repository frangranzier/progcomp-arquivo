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
    char string1[11];
    char vogais[] = "AEIOU";
    int tam, tamVogais, i, j, checkVogais;

    setlocale(LC_ALL, "portuguese");

    printf("Insira uma string de no máximo 10 caracteres: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';

    tam = strlen(string1);
    tamVogais = strlen(vogais);

    printf("String sem as vogais: ");

    for(i = 0; i < tam; i++){
        checkVogais = 0;
        for(j = 0; j < tamVogais; j++){
            if(toupper(string1[i]) != vogais[j]){
                checkVogais++;
            }
        }
        
        if(checkVogais == 5){
            printf("%c", string1[i]);
        }
    }

    return 0;
}