#include <stdio.h>

/*
    Escreva um programa que leia um número
    inteiro e depois imprima a mensagem “Valor
    lido:”, seguido do valor inteiro. Use apenas um
    comando printf().
*/

int main(){
    int num;

    scanf("%d", &num);
    printf("Valor lido: %d", num);

    return 0;
}