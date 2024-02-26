#include <stdio.h>
/*
Faça um programa que leia um valor inteiro e positivo N, calcule o mostre
o valor E, conforme a fórmula a seguir:
    E = 1/1! + 1/2! + 1/3! + ... + 1/N!
*/
int main(){
    int N;
    double E = 0.0;
    // Se faz necessário o uso do unsigned long longe para armazenar valores inteiros sem sinal em C e C++ Para evitar problemas com overflow, garantindo o funcionamento correto. 
    unsigned long long fatorial = 1;

    printf("Determine um numero inteiro para N: ");
    do{
        scanf("%d", &N);
        if(N < 0){
            printf("N: ");
        }
    }while(N < 0);

    for(int i = 1; i <= N; i++){
        fatorial *= i;
        E += 1.0 / fatorial;
    }

    printf("E = %lf", E);

    return 0;
}