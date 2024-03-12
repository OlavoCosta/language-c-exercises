#include <stdio.h>
#include <stdlib.h>
/* Escreva uma função que receba por parâmetro dois números e
retorne o maior deles. */

// Função para verificar qual dos dois números é maior e imprimir o resultado
void verificaMaiorNumero(float num1, float num2){

    if(num1 > num2){
        printf("\nO primeiro numero e maior!");
    }else if(num2 > num1){
        printf("\nO segundo numero e maior!");
    }else{
        printf("\nIguais, faca novamente!");
    }
}

int main(){
    float num1;
    float num2;

    printf("Primeiro numero: ");
    scanf("%f", &num1);
    printf("Segundo numero: ");
    scanf("%f", &num2);

    // Chamada de função para verificar e imprimir o maior número
    verificaMaiorNumero(num1, num2);

    return 0;
}