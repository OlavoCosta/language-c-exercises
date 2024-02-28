#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
/*  Faça um programa que leia uma string e a imprima de trás para a frente.     */
typedef struct Texto{
    char frase[N];
}texto;

void realizaImpressaoString(texto *p){
    // Verifica tamanho da string
    int comprimento = strlen(p->frase);

    while(comprimento >= 0){
        
        printf("%c", p->frase[comprimento]);
        comprimento--;
    }
}

// Função responsável por receber dados e alocá-los dinamicamente.
texto* realizaAlocacao(){

    texto *p = (texto*)malloc(sizeof(texto));

    printf("Escreva: ");
    fgets(p->frase, N, stdin);

    // Imprime a string redigida de trás para frente.
    realizaImpressaoString(p);

    return p;
}

int main(){
    texto *p = realizaAlocacao();

    // Realiza limpeza da Memória alocada dinamicamente
    free(p);

    return 0;
}