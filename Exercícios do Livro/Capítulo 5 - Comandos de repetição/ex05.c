#include <stdio.h>
/*
Faça um programa que calcule e mostre a soma dos 50
primeiros números pares
*/
int main(){
    int num = 1;
    int soma = 0;
    int contador = 0;

    printf("A soma dos 50 primeiros numeros pares sao:\n");

    while(contador < 50){
        if(num % 2 == 0){
            printf("%d\n", num);
            soma += num;
            contador++;
        }
        num++;
    }

    printf("Soma: %d", soma);

    return 0;
}