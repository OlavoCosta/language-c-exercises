#include <stdio.h>

/*  Faça um programa que leia uma string e a imprima na tela.       */

int main(){
    char frase[50];

    printf("Digite a frase desejada\n");
    fgets(frase, 50, stdin);

    printf("\n%s", frase);

    return 0;
}