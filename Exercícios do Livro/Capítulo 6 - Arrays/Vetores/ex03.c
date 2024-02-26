#include <stdio.h>
/*
Faça um programa que leia cinco valores e os armazene em um vetor. Em
seguida, mostre todos os valores lidos juntamente com a média dos valores.
*/
int main(){
    float numeros[5];
    float media = 0;

    printf("Determine os valores\n");

    for(int i = 0; i < 5; i++){
        printf("Numeros[%d]: ", i + 1);
        scanf("%f", &numeros[i]);

        media += numeros[i];
    }

    media = media / 5;

    printf("\nMedia = %.1f", media);

    return 0;
}