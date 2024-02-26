#include <stdio.h>

/*
    Faça um programa que leia um número inteiro e
    depois o imprima usando o operador “%f”. Veja o
    que aconteceu.
*/

int main(){
    int num;

    scanf("%d", &num);
    printf("%f", num);
    // O placeholder responsável pela impressão do inteiro é o %d ou %i.
    // Quando o placeholder estabelecido fora o de ponto flutuante, o programa apresenta um warning e retorna o valor zero como saida, com todas as casas decimais.

    return 0;
}