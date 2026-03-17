#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int n, i, fac;

    fac = 1;

    printf("Insira um número n: ");
    scanf("%i", &n);
    
    system("cls");

    if (n == 0){
        printf("%i! equivale a 1.\n\n", n);
    }
    else{
        for(i=1; i<n+1; i++){
            fac = fac*i;
        }

        printf("%i! equivale a %i.\n\n", n, fac);
    }

    system("pause");
    return 0;

}