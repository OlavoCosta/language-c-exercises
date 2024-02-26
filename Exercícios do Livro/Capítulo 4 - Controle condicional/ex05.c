#include <stdio.h>
#include <math.h>
/*
Faça um programa que leia um número e, caso ele seja
positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.
*/

void verificaNumeroPositivo(float numero){
    float aux;
    
    if(numero > 0){
        aux = pow(numero, 2);
        numero = sqrt(numero);
        printf("Numero ao quadrado: %.1f\nRaiz quadrada: %.1f", aux, numero);
    }
}

int main(){
    float numero;

    printf("Determine um numero: ");
    scanf("%f", &numero);

    verificaNumeroPositivo(numero);

    return 0;
}