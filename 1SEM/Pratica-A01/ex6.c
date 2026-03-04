#include <stdio.h>
#include <stdlib.h>

int main(){
    //Ex. 6 - Sistema para caixa de uma loja retornando troco e quantidade de cedulas necessarias pro troco
    int vCompra, vPago, cedCem, cedCinquenta, cedVinte, cedDez, cedCinco;

    printf("Insira o valor da compra: ");
    scanf("%i", &vCompra);
    printf("Insira o valor pago: ");
    scanf("%i", &vPago);

    int troco = vPago - vCompra;
    printf("Compra feita com sucesso!\nTroco: %i\n", troco);
        
    // Calculo de quantidade de notas necessarias
    cedCem = troco/100;
    troco = troco%100;
        
    cedCinquenta = troco/50;
    troco = troco%50;
        
    cedVinte = troco/20;
    troco = troco%20;
        
    cedDez = troco/10;
    troco = troco%10;
        
    cedCinco = troco/5;
    troco = troco%5;
        
    printf("Cedulas Necessarias: 100: %i | 50: %i | 20: %i | 10: %i | 5: %i | 1: %i\n", cedCem, cedCinquenta, cedVinte, cedDez, cedCinco, troco%5); // Moeda de 1 atribuida como resto do troco/5 -> moeda de 1 = (troco%5)/1 -> /1 inutil)
    return(0);
}