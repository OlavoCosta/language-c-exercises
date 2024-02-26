#include <stdio.h>
/*  Escreva um programa que leia um número inteiro e mostre a
multiplicação e a divisão desse número por dois (utilize os
operadores de deslocamento de bits).        */
int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Realiza a multiplicação por dois usando o operador de deslocamento para a esquerda
    int multiplicacao = num << 1;

    // Realiza a divisão por dois usando o operador de deslocamento para a direita
    int divisao = num >> 1;

    printf("Multiplicacao por dois: %d\n", multiplicacao);
    printf("Divisao por dois: %d\n", divisao);

    return 0;
}