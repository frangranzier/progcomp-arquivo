#include <stdio.h>

double fatorial(int N){
	if(N == 0){
		return 1;
	}
	
	return N * fatorial(N-1);
}


int main(){
    double fat;
    int num = 0;

    printf("Insira um numero: ");
    scanf("%i", &num);

    fat = fatorial(num);

    printf("\nFatorial de %i: %.2f\n\n", num, fat);
    return 0;
}