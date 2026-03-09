#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que verifica se um numero é multiplo de 5
    int num;

    printf("Insira um numero: ");
    scanf("%i", &num);

    system("cls");

    if (num%5==0){
        printf("O numero %i eh multiplo de 5.\n\n", num);
    }
    else {
        printf("O numero %i nao eh multiplo de 5.\n\n", num);
    }

    system("pause");
    return(0);
}
