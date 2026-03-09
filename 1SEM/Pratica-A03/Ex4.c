#include <stdio.h>
#include <stdlib.h>

int main(){
    // Programa que calcula o reajuste do salario de um funcionario referente ao seu salario
    float salario;

    printf("Insira o salario: ");
    scanf("%f", &salario);

    system("cls");

    if (salario>1000){
        printf("O salario reajustado sera de %.2f, sofrendo um reajuste de 5%%.\n\n", salario+(0.05*salario));
    }
    else{
        if (salario>=500){
            printf("O salario reajustado sera de %.2f, sofrendo um reajuste de 10%%.\n\n", salario+(0.1*salario));
        }
        else{
            printf("O salario reajustado sera de %.2f, sofrendo um reajuste de 15%%.\n\n", salario+(0.15*salario));
        }
    }

    system("pause");
    return(0);
}
