#include <stdio.h>

void printN(int N){
    if(N == 0){
        printf("%i ", N);
        return;
    } else {
        printN(N-1);
        printf("%i ", (N));
    }
}

int main(){
    int num;

    printf("Insira um numero: ");
    scanf("%i", &num);

    printN(num);
    return 0;
}