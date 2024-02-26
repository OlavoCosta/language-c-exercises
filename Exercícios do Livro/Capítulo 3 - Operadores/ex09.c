#include <stdio.h>

/*
Leia um ângulo em graus e apresente-o convertido em radianos. 
A fórmula de conversão é R = G * π/180, sendo G o
ângulo em graus e R em radianos e π = 3.141592.
*/

float convertendoValor(float a){
    float R;
    float PI = 3.141592;

    R = a * PI / 180;
    return R;
}

int main(){
    float grau;

    printf("Determine o valor do Angulo: ");
    scanf("%f", &grau);

    float radianos = convertendoValor(grau);

    printf("Radianos: %.1f", radianos);

    return 0;
}