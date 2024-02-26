#include <stdio.h>
/*
 Faça um programa que leia um número inteiro e retorne seu
antecessor e seu sucessor.
*/

int main(){
    int num;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    int antecessor = num - 1;
    int sucessor = num + 1;

    printf("\nAntecessor: %d\nNumero: %d\nSucessor: %d", antecessor, num, sucessor);

    return 0;
}