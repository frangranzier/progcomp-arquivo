#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ex. 3 - Preco total do carpete para uma sala
    float preco, comprimento, largura;

    printf("Insira o preco do metro quadrado do carpete: ");
    scanf("%f", &preco);
    printf("Insira a largura da sala: ");
    scanf("%f", &comprimento);
    printf("Insira o comprimento da sala: ");
    scanf("%f", &largura);

    printf("O valor total gasto para colocar carpete em uma sala de %fm2, sera de %f reais.\n", (comprimento*largura), (preco*(comprimento*largura)));
 
    return(0);
}