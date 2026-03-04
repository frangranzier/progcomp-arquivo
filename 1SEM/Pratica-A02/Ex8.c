#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calculadora custo para cercar terreno
    float largura, comprimento, preco, custoTotal;

    printf("Insira a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Insira o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Insira o preco do metro de tela (reais): ");
    scanf("%f", &preco);

    system("cls");

    custoTotal = (largura+comprimento) * 2*preco;

    printf("O custo total para cercar o terreno sera de: %.2f\n", custoTotal);
    system("pause");
    return(0);
}
