#include <stdio.h>
#include <math.h>
#include <stdbool.h>
/*
Faça um programa que receba um número inteiro maior do que 1 e
verifique se o número fornecido é primo ou não.
*/
bool verificaNumerofornecido(int n){

    for(int i = 2; pow(i, 2) <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;

    printf("Determine um numero inteiro\nNumero: ");
    do{
        scanf("%d", &num);
        if(num < 1){
            printf("Numero: ");
        }
    }while(num < 1);

    // Retorna o valor booleano diretamente para condição, se verdadeiro, primo, se não, não primo!
    if(verificaNumerofornecido(num)){
        printf("Numero primo!");
    }else{
        printf("Numero nao primo!");
    }

    return 0;
}