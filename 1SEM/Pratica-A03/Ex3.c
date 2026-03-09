#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que le 2 valores e se forem iguais soma, diferentes multiplica, atribuindo esse resultado a uma variavel C
    float A, B, C;

    printf("Insira o numero A: ");
    scanf("%f", &A);
    printf("Insira o numero B: ");
    scanf("%f", &B);

    system("cls");

    if (A==B){
        C = A+B;
    }
    else {
        C = A*B;
    }

    printf("A variavel C equivale a: %.2f\n\n", C);

    printf("Condicoes:\n");
    printf("Se A = B, C = A + B.\nSe A != B, C = A*B.\n\n");

    system("pause");
    return(0);
}
