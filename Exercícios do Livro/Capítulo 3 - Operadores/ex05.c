#include <stdio.h>

/*
Faça um programa que calcule o ano de nascimento de uma
pessoa a partir de sua idade e do ano atual
*/

int main(){
    const int ano = 2024;
    int anoNascimento, idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    anoNascimento =  ano - idade;

    printf("Ano de nascimento: %d", anoNascimento);

    return 0;
}
