#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    float n;

    printf("Insira um número: ");
    scanf("%f", &n);

    system("cls");

    for(i=1; i<11; i++){

        printf("%.2f x %i = %.2f\n", n, i, n*i);

    }

    printf("\n\n");

    system("pause");
    return 0;
}
