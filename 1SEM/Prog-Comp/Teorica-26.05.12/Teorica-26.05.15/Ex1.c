#include <stdio.h>
#include <string.h>

int tam(char s[], int tamanho){
    int i = 0;

    do{ 
        i++;
    }while(s[i] != '\0' && i < tamanho);

    if (s[i] != '\0'){
        printf("WARNING: No string end operator (\\0) found inside string array. Returned index of the last object in the array OR of the max size specified.\n");
    }

    return i;
}


int main(){
    char myString[7] = "hello";

    printf("%i", tam(myString, 3));

    return 0;
}