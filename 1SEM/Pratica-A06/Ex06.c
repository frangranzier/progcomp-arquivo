#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int nMult2 = 0, nMult5 = 0, i, vec[15];

    for(i=0; i<15; i++){
        printf("Insira um número inteiro para adicionar no vetor (%i/15): ", i+1);
        scanf("%i", &vec[i]);

        if(vec[i]%2 == 0){
            nMult2++;
        }
        if(vec[i]%5 == 0){
            nMult5++;
        }
    }

    system("cls");

    printf("No vetor, há %i números pares e %i multiplos de 5.\n\n", nMult2, nMult5);
    system("pause");
    return 0;
}