#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que, lendo a senha do usuario, imprime se ele esta logado ou nao, sendo que sua senha eh 2026
    int senha;

    printf("Insira sua senha: ");
    scanf("%i", &senha);

    system("cls");

    if (senha==2026){
        printf("Logado!\n\n");
    }
    else {
        printf("Erro. Tente novamente.\n\n");
    }

    system("pause");
    return(0);
}
