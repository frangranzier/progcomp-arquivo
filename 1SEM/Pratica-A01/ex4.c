#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ex. 4 - IMC
    float peso, altura;

    printf("Insira seu peso (Kg): ");
    scanf("%f", &peso);
    printf("Insira sua altura (m): ");
    scanf("%f", &altura);

    printf("Seu IMC equivale a %f\n", (peso/(altura*altura)));

    return(0);
}