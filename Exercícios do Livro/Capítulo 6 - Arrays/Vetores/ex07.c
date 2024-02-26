#include <stdio.h>
/*
Faça um programa que receba do usuário um vetor X com 10 posições. Em
seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/
void verificaMenorMaior(float X[]){
    float menor = X[0];
    float maior = X[0];

    for(int i = 0; i < 10; i++){
        if(X[i] < menor){
            menor = X[i];
        }
        if(X[i] > maior){
            maior = X[i];
        }
    }

    printf("\nMenor indice: %.2f\nMaior indice: %.2f", menor, maior);  
}

int main(){
    float X[10];

    printf("Determine os valores\n");

    for(int i = 0; i < 10; i++){
        printf("Numero[%d]: ", i + 1);
        scanf("%f", &X[i]);
    }

    verificaMenorMaior(X);

    return 0;
}