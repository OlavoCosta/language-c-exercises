#include <stdio.h>

/*
Faça um programa que leia dois números
inteiros e depois os imprima na ordem inversa em
que eles foram lidos.
*/

int main(){
    int num1, num2, aux;    

    scanf("%d", &num1);
    scanf("%d", &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("Numero 1: %d\nNumero 2: %d", num1, num2);

    return 0;
}