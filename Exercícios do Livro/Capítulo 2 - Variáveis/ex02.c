#include <stdio.h>

/*
    Escreva um programa que leia um número
    inteiro e depois o imprima.
*/

int main(){
    int numero;

    printf("Determine um numero inteiro: ");
    scanf("%d", &numero);
    printf("%d", numero);

    return 0;
}