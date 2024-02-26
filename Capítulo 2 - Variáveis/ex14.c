#include <stdio.h>

/*
Faça um programa que leia três caracteres do
tipo char e depois os imprima um em cada linha.
Use um único comando printf() para isso.
*/

int main(){
    char carac1, carac2, carac3;

    scanf("%c %c %c", &carac1, &carac2, &carac3);
    printf("%c\n%c\n%c", carac1, carac2, carac3);

    return 0;
}