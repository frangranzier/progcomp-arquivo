#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calculadora de aumento de salario
    float salario;

    printf("Insira o salario: ");
    scanf("%f", &salario);

    system("cls");

    if (salario<=3000){
        if (salario>1500){
            printf("O novo salario sera de R$%.2f, com aumento de 10%%.\n\n", salario+(salario*0.1));

            system("pause");
            return(0);
        }
        printf("O novo salario sera de R$%.2f, com aumento de 15%%.\n\n", salario+(salario*0.15));
    }
    else{
        printf("O novo salario sera de R$%.2f, com aumento de 5%%.\n\n", salario+(salario*0.05));
    }

    system("pause");
    return(0);
}
