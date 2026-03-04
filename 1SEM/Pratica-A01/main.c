#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index;
    printf("\nDigite um numero de 1-6 ou 0 para sair: ");
    scanf("%i", &index);

    if (index == 1) {
        // Ex. 1 - Leia um numero inteiro e imprima resultado da diferenca do seu triplo pelo dobro do seu sucessor
        int x;
        printf("Insira um numero inteiro: ");
        scanf("%i", &x);

        printf("A diferenca do triplo de %i pelo dobro de seu sucessor e: %i\n", x, (3*x)-((x-1)*2));
    }
    else if (index == 2) {
        // Ex. 2 - Consumo do veiculo
        float distancia, combustivel;

        printf("Insira a distancia percorrida (Km): ");
        scanf("%f", &distancia);
        printf("Insira a quantia de combustivel gasta (L): ");
        scanf("%f", &combustivel);

        printf("O consumo desse veiculo foi de %fKm/L\n", (distancia/combustivel));
    }
    else if (index == 3) {
        // Ex. 3 - Preco total do carpete para uma sala
        float preco, comprimento, largura;

        printf("Insira o preco do metro quadrado do carpete: ");
        scanf("%f", &preco);
        printf("Insira a largura da sala: ");
        scanf("%f", &comprimento);
        printf("Insira o comprimento da sala: ");
        scanf("%f", &largura);

        printf("O valor total gasto para colocar carpete em uma sala de %fm2, sera de %f reais.\n", (comprimento*largura), (preco*(comprimento*largura)));
    }
    else if (index == 4) {
        // Ex. 4 - IMC
        float peso, altura;

        printf("Insira seu peso (Kg): ");
        scanf("%f", &peso);
        printf("Insira sua altura (m): ");
        scanf("%f", &altura);

        printf("Seu IMC equivale a %f\n", (peso/(altura*altura)));
    }
    else if (index == 5) {
        // Ex. 5 - Quantia ganha pelos vencedores de um concurso
        float valor, ganhadorUm, ganhadorDois, ganhadorTres;

        printf("Insira o valor do concurso: ");
        scanf("%f", &valor);

        ganhadorUm = 0.46*valor;
        ganhadorDois = 0.32*valor;
        ganhadorTres = valor - (ganhadorUm + ganhadorDois);

        printf("Os premios serao divididos da seguinte maneira:\nPrimeiro: %f reais\nSegundo: %f reais\nTerceiro: %f reais\n", ganhadorUm, ganhadorDois, ganhadorTres);
    }
    else if (index == 6) {
        // Ex. 6 - Sistema para caixa de uma loja
        
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
    }
    else if (index == 0) {
    return(0);
    }
    else {
        printf("Insira um numero valido!");
        
    }
    main();
}
