#include <stdio.h>
/*
Faça um programa que calcule e escreva o valor de S:
    S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/55;
*/
int main(){
    double S = 0.0;

    // Duas variáveis, i é incrementado em 2, enquanto o j recebe 1 a cada soma.
    for(int i = 1, j = 1; i <= 99; i+=2, j++){
        S += i/j;
    }

    printf("Resultado do calculo: %.2lf", S);

    return 0;
}