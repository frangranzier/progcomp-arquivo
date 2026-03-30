#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float X[20], S = 0;
    int i, N;

    do{
        printf("Insira um número de 1-20: ");
        scanf("%i", &N);
    }while(N<1 || N>20);

    for(i=0; i<N; i++){
        printf("Insira um número qualquer para adicionar ao vetor (%i/%i): ", i+1, N);
        scanf("%f", &X[i]);

        S = S + X[i];
    }

    system("cls");

    printf("O vetor X é: ");

    for(i=0; i<N; i++){
        printf("%.2f ", X[i]);
    }

    printf("\nE a somatória S dos valores do vetor X equivale a: %.2f.\n\n", S);

    system("pause");
    return 0;
}