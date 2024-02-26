#include <stdio.h>
#include <math.h>
/*
Faça um programa que calcule o desvio-padrão d de um vetor V contendo
n números
    Desvio Padrão = 1 / n - 1 n E i=0 (v[i] - m)²
em que m é a média desse vetor. Considere
n = 10. O vetor v deve ser lido do teclado.
*/
int main(){
    int n = 10;
    float v[n];
    float soma = 0.0, media, desPadrao = 0.0;

    printf("Digite os %d numeros do vetor:\n", n);

    for(int i = 0; i < n; ++i){
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    // Calculando a soma dos quadrados das diferenças
    for(int i = 0; i < n; ++i){
        desPadrao += pow(v[i] - media, 2);
    }

    // Calculando o desvio-padrão
    desPadrao = sqrt(desPadrao / (n - 1));

    printf("\nO desvio-padrao dos numeros inseridos e: %.6f\n", desPadrao);

    return 0;
}