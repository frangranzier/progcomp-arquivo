#include <stdio.h>
#include <stdlib.h>

int main() {
    // Programa que pede um valor e mostra se e +, - ou nulo
    float x;
    printf("Insira um valor numerico: ");
    scanf("%f", &x);

    system("cls");

    if (x > 0) {
        printf("O numero inserido e positivo!\n");
    }
    else {
        if (x < 0) {
        printf("O numero inserido e negativo!\n");
        }
        else {
        printf("O numero inserido e nulo!\n");
        }
    }   
    
    system("pause");
    return(0);
}