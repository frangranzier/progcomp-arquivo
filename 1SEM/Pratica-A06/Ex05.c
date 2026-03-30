#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int vec[10], i, indiceMaior;

    for(i=0; i<10; i++){
        printf("Insira um número inteiro para adicionar no vetor: ");
        scanf("%i", &vec[i]);

        if(i != 0){
            if(vec[i] > vec[indiceMaior]){
                indiceMaior = i;
            }
        }
        else{
            indiceMaior = i;
        }
    }

    printf("O maior valor lido foi %i, que está na posição %i do vetor, considerando que as posições são de 0 - 9.\n\n", vec[indiceMaior], indiceMaior);
    system("pause");
    return 0;
}