#include <stdio.h>
/*
Escreva um programa que leia do teclado um vetor de 10 posições. Escreva
na tela quantos valores pares foram armazenados nesse vetor.
*/
int verificaPares(float v[]){
    int count = 0;

    for(int i = 0; i < 10; i++){
        if((int) v[i] % 2 == 0){
            count += 1;
        }
    }
    return count;
}

int main(){
    float vet[10];
    int contador = 0;

    printf("Determine os valores para as posicoes\n");

    for(int i = 0; i < 10; i++){
        printf("Numero[%d]: ", i);
        scanf("%f", &vet[i]);
    }

    printf("\nFoi inserido(s) %d numero(s) par(es)!", contador = verificaPares(vet));

    return 0;
}