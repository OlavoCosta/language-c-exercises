#include <stdio.h>

/*
 Faça um programa que leia três valores inteiros e mostre sua soma
*/

int main(){
    int soma = 0, num[3];

    printf("Determine os numeros inteiros\n");
    for(int i = 0; i < 3; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }

    printf("Soma: %d", soma);

    return 0;
}