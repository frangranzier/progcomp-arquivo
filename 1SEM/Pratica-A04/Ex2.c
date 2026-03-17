#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int codigo;

    printf("Insira o código do produto: ");
    scanf("%i", &codigo);

    system("cls");

    switch(codigo){
        case 1:
            printf("Alimento não-perecível.\n\n");
            break;

        case 2:
        case 3:
        case 4:
            printf("Alimento perecível.\n\n");
            break;

        case 5:
        case 6:
            printf("Vestuário.\n\n");
            break;

        case 7:
            printf("Higiene pessoal.\n\n");
            break;

        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("Limpeza e utensílios domésticos.\n\n");
            break;

        default:
            printf("Código invalido.\n\n");
            break;
    }

    system("pause");
    return 0;
}
