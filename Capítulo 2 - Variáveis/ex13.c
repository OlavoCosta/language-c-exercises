#include <stdio.h>

/*
 Faça um programa que leia um caractere do
tipo char e depois o imprima entre aspas duplas.
Assim, se o caractere lido for a letra A, deverá
ser impresso “A”.
*/

int main(){
    char carac;

    scanf("%c", &carac);
    printf("\"%c\"", carac);

    return 0;
}