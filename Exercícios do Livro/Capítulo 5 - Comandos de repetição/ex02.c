#include <stdio.h>
/*
Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem decrescente.
*/
int main(){
    int N;

    printf("Insira um numero inteiro\nNumero: ");
    do{
        scanf("%d", &N);
    }while(N < 0);

    for(int i = N; i > 0; i--){
        printf("%d ", i);
    }

    return 0;
}