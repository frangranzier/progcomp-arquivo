#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calculadora quantiade de degraus
    float hDegrau, hDesejada;

    printf("Insira a altura do degrau (cm): ");
    scanf("%f", &hDegrau);
    printf("Insira a altura alvo desejada (cm): ");
    scanf("%f", &hDesejada);

    printf("Para atingir a altura desejada de %.2fcm, o usuario devera subir %.0f degraus.\n\n", hDesejada, hDesejada/hDegrau);
    system("pause");
    return(0);
}
