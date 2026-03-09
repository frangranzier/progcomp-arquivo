#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que verifica se um numero é par
    int num;

    printf("Insira um numero: ");
    scanf("%i", &num);

    system("cls");

    if (num%2==0){
        printf("O numero %i eh par.\n\n", num);
    }
    else {
        printf("O numero %i eh impar.\n\n", num);
    }

    system("pause");
    return(0);
}
