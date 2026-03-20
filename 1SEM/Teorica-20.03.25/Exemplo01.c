#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa que espera um número maior que 10 do usuário e ve se é par ou impar
int main(){
    setlocale(LC_ALL, "portuguese");
    int x;

    do{
        printf("Insira um número inteiro maior que 10: ");
        scanf("%i", &x);

    }while(x<10);

    system("cls");

    if(x%2 != 0){
        printf("O número inserido é impar.\n\n");
    }
    else{
        printf("O número inserido é par.\n\n");
    }

    system("pause");
    return(0);
}