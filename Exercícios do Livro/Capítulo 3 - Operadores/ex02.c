#include <stdio.h>

/*
Faça um programa que leia um número real e imprima a
quinta parte desse número.
*/

int main(){
    float num;

    printf("Insira um numero real: ");
    scanf("%f", &num);

    num = num / 5;

    printf("Quinta parte: %f", num);

    return 0;
}