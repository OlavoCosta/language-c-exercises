#include <stdio.h>
#include <stdlib.h>
/*      Escreva um programa que leia o nome e o valor de determinada
mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é
de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o
nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago
à vista.        */
typedef struct Mercadoria{
    char produto[50];
    float valor;
}mercadoria;

// Determina o valor do produto à vista
void verificaValorAvista(mercadoria *p){

    float valDesc = (p->valor * 10) / 100;
    float valPago = p->valor - valDesc;

    printf("\nMercadoria: %s\nValor total produto R$%.2f\nValor final com desconto R$%.2f", p->produto, p->valor, valPago);
}

// Realiza alocação dinâmica dos dados na struct
mercadoria* realizaAlocacao(){
    mercadoria *p = (mercadoria*)malloc(sizeof(mercadoria));

    printf("\nNome do produto: ");
    fgets(p->produto, 50, stdin);

    printf("Valor produto R$: ");
    scanf("%f", &p->valor);

    // Chamada de função para verificar valor do produto à vista.
    verificaValorAvista(p);

    return p;
}

int main(){
    
    printf("\n\t\tCalculando o valor a ser pago\n");
    mercadoria *p = realizaAlocacao();

    // Realiza liberação da memória alocada dinamicamente
    free(p);

    return 0;
}