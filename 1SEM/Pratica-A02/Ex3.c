#include <stdio.h>
#include <stdlib.h>

int main(){
    // Conversor dolar -> real
    float cotacao, dolares;

    printf("Insira a atual cotacao do dolar: ");
    scanf("%f", &cotacao);
    printf("Insira um valor em dolares: ");
    scanf("%f", &dolares);

    printf("$%.2f equivale a R$%.2f", dolares, dolares*cotacao);
    return(0);
}
