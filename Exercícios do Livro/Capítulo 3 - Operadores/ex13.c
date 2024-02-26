#include <stdio.h>
#include <math.h>

/*
Sejam a e b os catetos de um triângulo cuja hipotenusa h é
obtida pela equação:
    h = √a² + b²
Faça um programa que leia os valores de a e b, e
calcule o valor da hipotenusa através da
fórmula dada. Imprima o resultado.
*/

float verificaCatetos(float a, float b){
    float c;

    c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int main(){
    float a, b;

    printf("Determine o Cateto a: ");
    scanf("%f", &a);
    printf("Determine o Cateto b: ");
    scanf("%f", &b);

    float hipotenusa = verificaCatetos(a, b); 

    printf("Hipotenusa = %.1f", hipotenusa);

    return 0;
}