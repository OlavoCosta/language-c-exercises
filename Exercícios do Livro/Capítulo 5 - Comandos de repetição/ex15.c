#include <stdio.h>
/*
Elabore um programa que faça a leitura de vários números
inteiros até que se digite um número negativo. O programa
tem de retornar o maior e o menor número lido.
*/
int main(){
    int num;
    int menor = 0;
    int maior = 0;

    printf("Ate que se digite um numero negativo, insira\n");

    do{
        scanf("%d", &num);

        if(menor == 0){
            menor = num;
        }

        if(num < menor){
            menor = num;
        }
        if(num > maior){
            maior = num;
        }

    }while(num > 0);

    printf("Menor: %d\nMaior: %d", menor, maior);

    return 0;
}