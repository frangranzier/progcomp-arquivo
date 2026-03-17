#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, n;
    float x, xStore;

    printf("Insira um número x: ");
    scanf("%f", &x);

    xStore = x;

    printf("Insira um número n: ");
    scanf("%i", &n);

    system("cls");

    for(i=1; i<n; i++){
        x = x*xStore;
    }

    printf("%.2f elevado a %i equivale a %.2f\n\n", xStore, n, x);

    system("pause");
    return 0;
}
