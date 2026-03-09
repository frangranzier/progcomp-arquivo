#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que le o preco de um produto e aplica um desconto de 10% se ele for mais caro que 100 reais
    float preco;

    printf("Insira o preco do produto: ");
    scanf("%f", &preco);

    system("cls");

    if (preco>100){
        printf("O produto custa R$%.2f, com desconto de 10%% em cima de seu preco original.\n\n", preco-(0.1*preco));
    }
    else {
        printf("O produto custa R$%.2f, sem desconto em cima de seu preco original.\n\n", preco);
    }

    system("pause");
    return(0);
}
