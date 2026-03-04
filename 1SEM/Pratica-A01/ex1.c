#include <stdio.h>
#include <stdlib.h>

int main(){
    // Ex. 1 - Leia um numero inteiro e imprima resultado da diferenca do seu triplo pelo dobro do seu sucessor
        int x;
        printf("Insira um numero inteiro: ");
        scanf("%i", &x);

        printf("A diferenca do triplo de %i pelo dobro de seu sucessor equivale a: %i\n", x, (3*x)-((x-1)*2));

        return(0);
}