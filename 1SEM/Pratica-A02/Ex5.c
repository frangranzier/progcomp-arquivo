#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calculadora pagamento encanador
    float diariaEncanador = 30, imposto = 0.08, preco;
    int dias;

    printf("Insira a quantia de dias trabalhados pelo encanador: ");
    scanf("%i", &dias);

    preco = diariaEncanador*dias;

    printf("O preco total a ser pago para o encanador, descontando o imposto de renda, equivale a R$%.2f\n\n", preco-(preco*imposto));
    system("pause");
    return(0);
}
