#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calculadora quantidade de combustivel gasto
    float autonomia = 12, tempo, velocidadeMedia, distancia, consumo;

    printf("Insira o tempo gasto na viagem (h): ");
    scanf("%f", &tempo);
    printf("Insira a velocidade media no automovel na viagem (km/h): ");
    scanf("%f", &velocidadeMedia);

    system("cls");

    distancia = velocidadeMedia*tempo;
    consumo = distancia/autonomia;

    printf("Velocidade Media:       %.2fkm/h\n", velocidadeMedia);
    printf("Tempo Gasto:            %.2fh\n", tempo);
    printf("Distancia Percorrida:   %.2fkm\n", distancia);
    printf("Combustivel Consumido:  %.2fL\n", consumo);
    system("pause");
    return(0);
}
