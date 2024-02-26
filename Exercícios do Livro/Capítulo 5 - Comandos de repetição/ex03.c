#include <stdio.h>
/*
Faça um programa que leia um número inteiro N e depois
imprima os N primeiros números naturais ímpares.
*/
void verificaNumerosImpares(int N){
    for(int i = 0; i < N; i++){
        if(i % 2 == 1){
            printf("%d ", i);
        }
    }
}

int main(){
    int N;

    printf("Insira um numero inteiro\nNumero: ");
    do{
        scanf("%d", &N);
    }while(N < 0);

    verificaNumerosImpares(N);

    return 0;
}