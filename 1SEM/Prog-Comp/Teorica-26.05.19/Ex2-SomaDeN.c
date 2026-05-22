#include <stdio.h>
#include <locale.h>

int soma(int n){
    if(n == 1){
        return 1;
    }
    return n + soma(n-1);
}

int main(){
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Insira um numero: ");
    scanf("%i", &num);

    printf("\nA soma dos números até %i é: %i\n\n", num, soma(num));
    return 0;
}