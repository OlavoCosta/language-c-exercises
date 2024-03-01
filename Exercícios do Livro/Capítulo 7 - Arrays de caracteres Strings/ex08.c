#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
/*  Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da
primeira.    */
typedef struct Text{
    char frase[N];
}text;

text* realizaAlocacao(){
    text *vet = (text*)malloc(2 * sizeof(text));

    for(int i = 0; i < 2; i++){
        printf("String[%d]: ", i + 1);
        fgets(vet[i].frase, N, stdin);
    }

    return vet;
}

int main(){
    text *p = realizaAlocacao();

    // Verifica se a segunda string está contida dentro da primeira
    if(strstr(p[0].frase, p[1].frase) != NULL){
        printf("\nA segunda string esta contida na primeira.");
    }else{
        printf("\nA segunda string nao esta contida na primeira.");
    }

    // Libera a memória alocada dinamicamente.
    free(p);

    return 0;
}