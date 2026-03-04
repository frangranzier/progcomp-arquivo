#include <stdio.h>
#include <stdlib.h>

int main(){
    //Comparador de numeros > <
    float x, y;

    printf("Insira o primeiro numero: ");
    scanf("%f", &x);
    printf("Insira o segundo numero: ");
    scanf("%f", &y);

    system("cls");

    if (x>y){
        printf("%.3f eh maior numero entre os 2 inseridos.\n", x);
    }
    else {
        if (y>x) {
        printf("%.3f eh o maior numero entre os 2 inseridos.\n", y);
        }
        else { 
        printf("Os dois numeros inseridos sao iguais!\n");
        }
    }

    system("pause");
    return(0);

}