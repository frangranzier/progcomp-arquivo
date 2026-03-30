#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int X[20], Y[20], N, K, i;

    do{
        printf("Insira um número de 1-20: ");
        scanf("%i", &N);
    }while(N<1 || N>20);

    for(i=0; i<N; i++){
        printf("Insira um número inteiro para adicionar ao vetor (%i/%i): ", i+1, N);
        scanf("%i", &X[i]);
    }

    printf("Insira um número inteiro qualquer: ");
    scanf("%i", &K);

    for(i=0; i<N; i++){
        Y[i] = X[i]*K;
    }

    system("cls");

    printf("Vetor X: ");
    for(i=0; i<N; i++){
        printf("%i ", X[i]);
    }

    printf("\nK: %i", K);
    
    printf("\nVetor Y: ");
    for(i=0; i<N; i++){
        printf("%i ", Y[i]);
    }

    system("pause");
    return 0;
}