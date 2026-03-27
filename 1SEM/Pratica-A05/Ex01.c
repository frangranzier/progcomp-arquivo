#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float num;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    printf("Insira um número: ");
    scanf("%f", &num);

    while(num>=0){

        if(num <= 100){
            if(num > 75){
                intervalo4++;
            }
            else{
                if(num > 50){
                    intervalo3++;
                }
                else{
                    if(num > 25){
                        intervalo2++;
                    }
                    else{
                        intervalo1++;
                    }
                }
            }
        }

        printf("Insira um número: ");
        scanf("%f", &num);
    }

    system("cls");

    printf("Intervalo 0 - 25: %i.\n", intervalo1);
    printf("Intervalo 26 - 50: %i.\n", intervalo2);
    printf("Intervalo 51 - 75: %i.\n", intervalo3);
    printf("Intervalo 76 - 100: %i.\n\n", intervalo4);

    system("pause");
    return 0;
}
