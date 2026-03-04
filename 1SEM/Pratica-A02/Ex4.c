#include <stdio.h>
#include <stdlib.h>

int main(){
    // Conversor km/h -> m/s
    float kmh;

    printf("Insira uma velocidade em km/h: ");
    scanf("%f", &kmh);

    printf("%.2fkm/h equivale a %.2fm/s", kmh, kmh/3.6);
    return(0);
}
