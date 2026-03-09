#include <stdio.h>
#include <stdlib.h>

int main(){
    // Leia dois valores de coordenada x e y e indique em qual quadrante o ponto estara ou se esta sobre um dos eixos ou se esta na origem
    float x, y;

    printf("Insira um valor x: ");
    scanf("%f", &x);
    printf("Insira um valor y: ");
    scanf("%f", &y);

    system("cls");

    // eixos
    if (x==0 || y==0){
        if (x==y){
            printf("O ponto esta na origem (0, 0).\n\n");
        }
        else{
            printf("O ponto esta sobre um eixo.\n\n");
        }
    }

    // quadrantes
    else {
        //1Q, 4Q
        if (x>0){

            if (y>0){
                printf("O ponto esta no primeiro quadrante.\n\n");
            }

            else {
                printf("O ponto esta no quarto quadrante.\n\n");
            }
        }
        //2Q, 3Q
        else {
            if (y>0){
                printf("O ponto esta no segundo quadrante.\n\n");
            }

            else {
                printf("O ponto esta no terceiro quadrante.\n\n");
            }
        }
    }

    system("pause");
    return(0);
}
