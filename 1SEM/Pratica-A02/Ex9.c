#include <stdio.h>
#include <stdlib.h>

int main(){
    // Inversor de numero inteiro de tres digitos
    float numero;
    int x, y, z, numeroInvertido;

    printf("Insira um numero inteiro de tres digitos: ");
    scanf("%f", &numero);

    system("cls");
    // Pega os digitos individualmente | Ex: 123
    x = numero/100; //1.23 -> 1
    y = numero/10 - x*10; // 12.3 - 10 -> 2.3 -> 2
    z = numero - x*100 - y*10; // 123 - 100 - 20 = 3

    numeroInvertido = (100*z) + (10*y) + x; // 300 + 20 + 1

    printf("Numero lido:         %.0f\n", numero);
    printf("Numero invertido:    %d\n", numeroInvertido);
    return(0);
}
