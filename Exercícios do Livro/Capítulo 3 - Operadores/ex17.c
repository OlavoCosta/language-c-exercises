#include <stdio.h>
/*  Escreva um programa que leia um número inteiro e mostre o
seu complemento bit a bit.      */
int main(){
    int num;

    printf("Digite um numero inteiro desejado: ");
    scanf("%d", &num);

    // Calcula o complemento bit a bit usando o operador de inversão (~).
    int complemento = ~num;

    printf("Complemento bit a bit: %d\n", complemento);

    return 0;
}