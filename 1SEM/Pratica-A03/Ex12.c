#include <stdio.h>
#include <stdlib.h>

int main(){
    // Desafio - Programa que verifica se, dado 3 lados, formam um triangulo e se o triangulo eh equilatero, isoceles ou escaleno.
    float l1, l2, l3;

    printf("Insira o comprimento do primeiro lado: ");
    scanf("%f", &l1);
    printf("Insira o comprimento do segundo lado: ");
    scanf("%f", &l2);
    printf("Insira o comprimento do terceiro lado: ");
    scanf("%f", &l3);

    system("cls");

    if(l1>(l2+l3) || l2>(l1+l3) || l3>(l1+l2)){
        printf("Os comprimentos inseridos nao formam um triangulo.\n\n");
    }
    else{
        if (l1==l2 || l2==l3){
                if (l1 == l2 && l2 == l3){
                    printf("O triangulo formado eh equilatero.\n\n");
                }
                else{
                    printf("O triangulo formado eh isoceles.\n\n");
                }

        }
        else{
            printf("O triangulo formado eh escaleno.\n\n");
        }
    }

    system("pause");
    return(0);
}
