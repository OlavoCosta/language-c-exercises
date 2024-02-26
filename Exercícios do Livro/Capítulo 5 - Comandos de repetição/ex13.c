#include <stdio.h>
/*
Faça um programa que exiba a soma de todos os números
naturais abaixo de 1.000 que são múltiplos de 3 ou 5.
*/
int main(){
    int contador = 1;
    int soma = 0;

    printf("Soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 e 5\n");

    while(contador < 1000){
        if(contador % 3 == 0 && contador % 5 == 0){
            printf("%d\n", contador);
            soma += contador;
        }
        contador++;
    }

    printf("\nSoma dos numros naturais = %d", soma);

    return 0;
}