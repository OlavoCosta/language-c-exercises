#include <stdio.h>

/*
Faça um programa que leia dois valores do tipo
float. Use um único comando de leitura para isso.
Em seguida, imprima os valores lidos na ordem
inversa em que eles foram lidos
*/

int main(){
    float num1, num2, aux;

    scanf("%f %f", &num1, &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("Num 1: %.2f\nNum 2: %.2f", num1, num2);

    return 0;
}