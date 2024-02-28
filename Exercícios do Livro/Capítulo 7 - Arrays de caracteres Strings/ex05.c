#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
/*  Faça um programa que leia uma string e a inverta. A string invertida deve
ser armazenada na mesma variável. Em seguida, imprima a string
invertida.    */
typedef struct Texto{
    char frase[N];
}texto;

void realizaInversaoString(texto *p){
    // Verifica tamanho da string
    int comprimento = strlen(p->frase) - 1;

    for(int i = 0; i < comprimento; i++){

        // Realiza a inversão dos caracteres
        char temp = p->frase[comprimento];
        p->frase[comprimento] = p->frase[i];
        p->frase[i] = temp;

        comprimento--;
    }

    printf("\nString Invertida: %s", p->frase);
}

// Função responsável por receber dados e alocá-los dinamicamente.
texto* realizaAlocacao(){

    texto *p = (texto*)malloc(sizeof(texto));

    printf("Escreva: ");
    fgets(p->frase, N, stdin);

    // Chamada de função para inversão da string redigida.
    realizaInversaoString(p);

    return p;
}

int main(){
    texto *p = realizaAlocacao();

    // Realiza limpeza da Memória alocada dinamicamente
    free(p);

    return 0;
}