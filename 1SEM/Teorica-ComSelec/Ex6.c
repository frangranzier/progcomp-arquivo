#include <stdio.h>
#include <stdlib.h>

int main(){
    // Pergunte o preco de tres produtos e escolha o mais barato
    float prod1, prod2, prod3;

    printf("Insira o valor do produto 1: ");
    scanf("%f", &prod1);
    printf("Insira o valor do produto 2: ");
    scanf("%f", &prod2);
    printf("Insira o valor do produto 3: ");
    scanf("%f", &prod3);

    system("cls");

    if (prod1<prod2&&prod1<prod3){
        printf("O produto mais barato sera o produto 1, com preco de %.2f\n", prod1);
    }
    else{
        if (prod2<prod3){
            printf("O produto mais barato sera o produto 2, com preco de %.2f\n", prod2);
        }
        else{
            printf("O produto mais barato sera o produto 3, com preco de %.2f\n", prod3);
        }
    }
    system("pause");
    return(0);
}