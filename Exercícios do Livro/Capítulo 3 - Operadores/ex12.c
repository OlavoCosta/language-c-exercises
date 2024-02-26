#include <stdio.h>
#include <math.h>

/*
Leia a altura e o raio de um cilindro circular e imprima o
volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
    V = π * raio² * altura
em que π = 3.141592
*/

int main(){
    float raio, altura, volume;
    float PI = 3.141592;

    printf("Altura do cilindro: ");
    scanf("%f", &altura);
    printf("Raio do cilindro: ");
    scanf("%f", &raio);

    volume = PI * pow(raio, 2) * altura;

    printf("Volume do cilindro circular: %.2f", volume);

    return 0;
}