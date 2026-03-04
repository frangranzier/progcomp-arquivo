#include <stdio.h>
#include <stdlib.h>

int main() {
    //algoritimo para ler num x e retornar y de acordo com as condicoes listadas
    float x, y;
    printf("Insira um numero qualquer: ");
    scanf("%f", &x);

    system("cls");

    if (x<1){
        y = x;
    }
    else {

        if(x>1){
            y = x*x;
        }
        else{
            y=0;
        }
    }

    printf("Algoritimo:\n");
    printf("Se x < 1, y = x.\n");
    printf("Se x > 1, y = x^2.\n");
    printf("Se x = 1, y = 0.\n\n");

    printf("Seguindo o algoritimo, temos que y = %f\n", y);

    system("pause");
    return(0);
}