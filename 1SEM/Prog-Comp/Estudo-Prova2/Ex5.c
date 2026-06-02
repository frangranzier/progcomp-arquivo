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
    char nome[101];
    int i, tam;

    setlocale(LC_ALL, "portuguese");
    
    printf("Insira seu nome completo (100 caracteres): ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';
    tam = strlen(nome);

    printf("Iniciais: ");

    if(nome[0] != ' '){
        printf("%c", toupper(nome[0]));
    }

    for(i = 0; i < tam; i++){
        if(nome[i] == ' '){
            printf("%c", toupper(nome[i+1]));
        }
    }

    printf("\n\n");

    return 0;
}