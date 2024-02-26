#include <stdio.h>

/*
Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, imprima o valor correspondente em
dólares
*/

int main(){
    float reais, dolar;

    printf("Reais R$");
    scanf("%f", &reais);
    printf("Cotacao do dia em dolar: ");
    scanf("%f", &dolar);

    dolar = reais * dolar;

    printf("Quantia em Dolar $%.2f", dolar);

    return 0;
}