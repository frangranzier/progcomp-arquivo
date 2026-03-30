#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int A[10], somaIdades, mediaIdades, i, nAbaixo;

    somaIdades = 0;
    nAbaixo = 0;

    for(i=0; i<10; i++){
        printf("Insira uma idade para adicionar na lista (%i/10): ", i+1);
        scanf("%i", &A[i]);

        somaIdades+=A[i];
    }

    mediaIdades = somaIdades/10;

    for(i=0; i<10; i++){
        if(A[i] < mediaIdades){
            nAbaixo++;
        }
    }

    printf("A idade média é de %i, onde %i são mais novos do que essa média.\n\n", mediaIdades, nAbaixo);

    system("pause");
    return 0;
}