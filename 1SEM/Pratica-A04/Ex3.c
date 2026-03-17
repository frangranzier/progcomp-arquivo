#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int plano;
    float salario;

    printf("Insira seu salário: ");
    scanf("%f", &salario);
    printf("Insira seu plano de trabalho (1-3): ");
    scanf("%i", &plano);

    system("cls");

    switch(plano){
        case 1:
            printf("Seu aumento de salário foi de 10%, com novo valor de R$%.2f.\n\n", salario*1.1);
            break;

        case 2:
            printf("Seu aumento de salário foi de 15%, com novo valor de R$%.2f.\n\n", salario*1.15);
            break;

        case 3:
            printf("Seu aumento de salário foi de 20%, com novo valor de R$%.2f.\n\n", salario*1.2);
            break;

        case 4:
            printf("Plano de trabalho invalido.\n\n");
            break;
    }


    system("pause");
    return 0;
}
