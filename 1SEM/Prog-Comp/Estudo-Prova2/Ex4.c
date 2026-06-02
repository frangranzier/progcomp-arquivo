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

    char nome[25], sobrenome[25], nomeCompleto[50];

    printf("Insira seu primeiro nome: ");
    fgets(nome, sizeof(nome), stdin);
    limpaBuffer();

    nome[strcspn(nome, "\n")] = '\0';

    printf("Insira seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    limpaBuffer();

    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("%s", nomeCompleto);
    return 0;
}