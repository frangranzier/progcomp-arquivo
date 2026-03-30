#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int N, X[20], i, Xinv[20], Nstore;

    do{
        printf("Insira um número de 1-20: ");
        scanf("%i", &N);
        Nstore = N;
    }while(N<1 || N>20);

    for(i=0; i<N; i++){
        printf("Insira um número inteiro para adicionar ao vetor (%i/%i): ", i+1, N);
        scanf("%i", &X[i]);
    }

    system("cls");

    for(i=0; i<Nstore; i++, N--){
        Xinv[i] = X[N-1];
    }

    printf("O vetor X é: ");
    for(i=0; i<Nstore; i++){
        printf("%i ", X[i]);
    }

    printf("\nE o vetor X inverso é: ");
    for(i=0; i<Nstore; i++){
        printf("%i ", Xinv[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}