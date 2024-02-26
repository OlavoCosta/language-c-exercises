#include <stdio.h>

/*
Faça um programa que leia um número inteiro e verifique se
esse número é par ou ímpar
*/

int main(){
    int numero;

    printf("Determine um numero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Numero %d e par!", numero);
    }else{
        printf("Numero %d e impar!", numero);
    }

    return 0;
}