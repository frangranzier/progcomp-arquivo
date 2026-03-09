#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que verifica se um numero eh divisivel pelo outro
    int x, y;

    printf("Insira o primeiro numero: ");
    scanf("%i", &x);
    printf("Insira o segundo numero: ");
    scanf("%i", &y);

    system("cls");

    if (x%y==0){
        printf("O numero %i eh divisivel por %i.\n\n", x, y);
    }
    else {
        printf("O numero %i nao eh divisivel por %i.\n\n", x, y);
    }

    system("pause");
    return(0);
}
