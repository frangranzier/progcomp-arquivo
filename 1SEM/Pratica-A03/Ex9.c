#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que verifica se um lutador e juvenil (idade > 18), peso medio (peso <= 80kg) ou peso pesado (peso > 80kg)
    int idade;
    float peso;

    printf("Insira a idade do lutador: ");
    scanf("%i", &idade);

    if (idade<18){
        system("cls");

        printf("O lutador deve competir na categoria juvenil.\n\n");

        system("pause");
        return(0);
    }

    printf("Insira o peso do lutador (kg): ");
    scanf("%f", &peso);

    system("cls");

    if (peso<=80){
        printf("O lutador deve competir na categoria peso medio.\n\n");
    }
    else {
        printf("O lutador deve competir na categoria peso pesado.\n\n");
    }

    system("pause");
    return(0);
}
