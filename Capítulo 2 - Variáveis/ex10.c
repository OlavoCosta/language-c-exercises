#include <stdio.h>

/*
Elabore um programa que solicite ao usuário
entrar com o valor do dia, mês e ano (inteiros).
Em seguida, imprima os valores lidos separados
por uma barra (\)
*/

int main(){
    int dia, mes, ano;

    printf("Determine o dia, mes e o ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("%d\\%d\\%d", dia, mes, ano);

    return 0;
}