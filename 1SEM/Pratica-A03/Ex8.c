#include <stdio.h>
#include <stdlib.h>

int main(){
    // Escreva um programa que pede o salario bruto, valor da prestacao do emprestimo, tempo de servico.
    // Se a prestacao for maior que 30% do salario, negue o emprestimo. Se nao, aprove o emprestimo, e se a duracao for de mais 2 anos, aprove com bonus
    float salario, prestacao, tempoServico;

    printf("Insira seu salario: ");
    scanf("%f", &salario);
    printf("Insira a prestacao do emprestimo: ");
    scanf("%f", &prestacao);
    printf("Insira o tempo do servico (anos): ");
    scanf("%f", &tempoServico);

    system("cls");

    if (prestacao<0.3*salario){
        if (tempoServico > 2){

            printf("Emprestimo aprovado com bonus!\n\n");

            system("pause");
            return(0);
        }

        printf("Emprestimo aprovado!\n\n");
    }
    else {
        printf("Emprestimo negado.\n\n");
    }

    system("pause");
    return(0);
}
