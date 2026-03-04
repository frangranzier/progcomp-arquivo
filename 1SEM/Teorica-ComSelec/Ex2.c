#include <stdio.h>
#include <stdlib.h>

int main (){
    // Verifica se um numero inteiro é par ou ímpar
    int x;
    printf("Insira um numero inteiro: ");
    scanf("%i", &x);

    system("cls");


    if (x%2!=0 && x!=0) {
        printf("O numero inserido e impar.\n");
    }
    else {
        printf("O numero inserido e par.\n");
    }
    system("pause");
    return(0);
}