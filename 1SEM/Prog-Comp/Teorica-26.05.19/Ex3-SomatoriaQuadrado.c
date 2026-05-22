#include <stdio.h>

int somatoria(int N){
    if(N == 1){
        return 1;
    }

    return N*N + somatoria(N-1);
}

int main(){
    int num;
    printf("Insira um numero: ");
    scanf("%i", &num);

    printf("\n\nSomatoria (i = 1 -> %i): %i\n\n", num, somatoria(num));
    return 0;
}