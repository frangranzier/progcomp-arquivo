#include <stdio.h>
#include <stdlib.h>

int main(){
    // Conversor farenheit -> celsius
    float tempCelsius, tempFarenheit;

    printf("Insira a temperatura em farenheit: ");
    scanf("%f", &tempFarenheit);

    tempCelsius = ((tempFarenheit-32)*5)/9;

    printf("Convertendo %.2fF em celsius, temos %.2fC.", tempFarenheit, tempCelsius);
    return(0);
}
