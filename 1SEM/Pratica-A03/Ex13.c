#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Desafio - Calculador de equacao do segundo grau
    float a, b, c, x1, x2;
    printf("Insira o coeficiente a: ");
    scanf("%f", &a);
    printf("Insira o coeficiente b: ");
    scanf("%f", &b);
    printf("Insira o coeficiente c: ");
    scanf("%f", &c);

    system("cls");

    x1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);

    x2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);

    printf("As raizes da equacao sao %f e %f.\n\n", x1, x2);

    system("pause");
    return(0);
}
