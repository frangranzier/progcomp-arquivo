#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ex. 5 - Quantia ganha pelos vencedores de um concurso
    float valor, ganhadorUm, ganhadorDois, ganhadorTres;

    printf("Insira o valor do concurso: ");
    scanf("%f", &valor);

    ganhadorUm = 0.46*valor;
    ganhadorDois = 0.32*valor;
    ganhadorTres = valor - (ganhadorUm + ganhadorDois);

    printf("Os premios serao divididos da seguinte maneira:\nPrimeiro: %f reais\nSegundo: %f reais\nTerceiro: %f reais\n", ganhadorUm, ganhadorDois, ganhadorTres);
    return(0);
}