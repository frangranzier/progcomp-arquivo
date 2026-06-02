#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void limpaBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void readInt(int *valor){
    printf("\n> ");
    scanf("%i", valor);
    limpaBuffer();
}

void readStr(char s[], int size){
    printf("Insira uma string (tamanho máx. de 100 caracteres) > ");
    fgets(s, size, stdin);
    limpaBuffer();
    s[strcspn(s, "\n")] = '\0';
}

//strlen
int tam(char s[]){ 
    int i, count = 0;

    for(i = 0; s[i] != '\0'; i++){
        count++;
    }

    return count;
}

// strcpy
void copia(char destino[], char origem[]){
    int size = tam(origem), i;

    for(i = 0; i < size; i++){
        destino[i] = origem[i];
    }

    origem[i+1] = '\0';
} 

// strcat
void une(char destino[], char sub[]){
    int sizeDes = tam(destino), sizeSub = tam(sub), i;

    for(i = 0; i < sizeSub; i++){
        destino[sizeDes + i] = sub[i];
    }

    destino[sizeDes + i + 1] = '\0';
}

int main(){
    int input;
    char str1[101], str2[201];

    setlocale(LC_ALL, "portuguese");

    printf("Menu:\n\n1. Tamanho de String\n2. Copia e cola uma string\n3. Unir 2 strings\n");
    readInt(&input);

    switch(input){
        case 1:
            readStr(str1, sizeof(str1));
            printf("O tamanho da String inserida é de %i caracteres.\n", tam(str1));
            break;

        case 2:
            readStr(str1, sizeof(str1));
            copia(str2, str1);
            printf("str1: %s\n", str1);
            printf("str2: %s\n", str2);
            break;

        case 3:
        printf("String #1 (destino):\n");
        readStr(str2, sizeof(str2));
        printf("String #2 (sub):\n");
        readStr(str1, sizeof(str1));
        une(str2, str1);
        printf("\nA união das 2 strings equivale a '%s'\n", str2);
    }

    return 0;
}