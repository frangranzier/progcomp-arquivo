#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float Z[20], X[20], Y[20];
    int i, N;

    // N
    do{
        printf("Insira um número de 1-20: ");
        scanf("%i", &N);
    }while(N>20 || N<1);

    // Vetor X
    for(i=0; i<N; i++){
        printf("Insira um valor para o vetor X (%i/%i): ", i+1, N);
        scanf("%f", &X[i]);
    }

    system("cls");

    // Vetor Y e multiplicação (Vetor Z)
    for(i=0; i<N; i++){
        printf("Insira um valor para o vetor Y (%i/%i): ", i+1, N);
        scanf("%f", &Y[i]);

        Z[i] = X[i] * Y[i];
    }
    
    system("cls");

    printf("Os Vetores X, Y e Z são:\nX: ");

    // Print X
    for(i=0; i<N; i++){
        printf("%.2f ", X[i]);
    }

    printf("\nY: ");

    // Print Y
    for(i=0; i<N; i++){
        printf("%.2f ", Y[i]);
    }

    printf("\nZ: ");

    // Print Z
    for(i=0; i<N; i++){
        printf("%.2f ", Z[i]);
    }

    printf("\n\n");

    system("pause");
    return 0;
}