#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, n, x, y, z;

    x = 0;
    y = 1;
    z = 0;

    printf("Insira um número n: ");
    scanf("%i", &n);

    system("cls");

    printf("Os %i primeiros digitos da sequência de fibonacci são: ", n);
    printf("%i %i ", x, y);

    for(i=0; i<n-2; i++){

        z = x + y;
        x = y;
        y = z;

        printf("%i ", z);
    }

    printf("\n\n");


    system("pause");
    return 0;
}
