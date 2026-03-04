#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ex. 2 - Consumo do veiculo
    float distancia, combustivel;

    printf("Insira a distancia percorrida (Km): ");
    scanf("%f", &distancia);
    printf("Insira a quantia de combustivel gasta (L): ");
    scanf("%f", &combustivel);

    printf("O consumo desse veiculo foi de %fKm/L\n", (distancia/combustivel));

    return(0);
}