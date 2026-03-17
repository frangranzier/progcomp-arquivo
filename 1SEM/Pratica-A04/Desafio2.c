#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n, i;
    float x, maior;

    maior = -32767;

    printf("Insira um valor n maior ou igual a 10: ");
    scanf("%i", &n);

    system("cls");

    if (n<10){
        printf("O valor n deve ser maior ou igual a 10!\n\n");
    }
    else{
        for(i=1; i<n+1; i++){

            printf("Insira o valor #%i: ", i);
            scanf("%f", &x);

            if (x>maior){
                maior = x;
            }

        }
        printf("O maior valor inserido foi %.2f.\n\n", maior);

    }
    system("pause");
    return 0;
}