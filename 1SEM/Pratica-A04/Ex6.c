#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, n, x, somaPares, impares, somaFinal;

    somaPares = 0;
    impares = 0;

    printf("Insira um valor n: ");
    scanf("%i", &n);

    system("cls");

    for(i=1; i<n+1; i++){

        printf("Insira o valor #%i: ", i);
        scanf("%i", &x);

        if (x%2==0){
            somaPares+=x;
        }
        else {
            impares+=1;
        }

    }

    somaFinal = somaPares + impares;

    system("cls");

    printf("A soma dos valores pares + a quantidade de números impares inseridos equivale a %i.\n\n", somaFinal);

    system("pause");
    return 0;
}
