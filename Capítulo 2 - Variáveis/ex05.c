#include <stdio.h>

/*
    Faça um programa que leia um valor do tipo
    float e depois o imprima usando o operador “%d”.
    Veja o que aconteceu.
*/

int main(){
    float num;

    scanf("%f", &num);
    printf("%d", num);
    /*
        Assim como o exercício anterior, o placeholder para impressão determinado é do tipo inteiro, apresentando um warning já que o valor determinado pelo usuário fora um valor do tipo ponto flutuante.
    */

    return 0;
}