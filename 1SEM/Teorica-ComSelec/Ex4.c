#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ler um numero inteiro e ver se ele e divisivel por 3 e 5 ao mesmo tempo
    int x;

    printf("Insira um numero: ");
    scanf("%i", &x);

    system("cls");

    if (x%5==0 && x%3==0){
        printf("%i eh divisivel por 3 e 5 ao mesmo tempo.", x);
    }
    else{
        printf("%i nao eh divisivel por 3 e 5 ao mesmo tempo.", x);
    }

    system("pause");
    return(0);
}