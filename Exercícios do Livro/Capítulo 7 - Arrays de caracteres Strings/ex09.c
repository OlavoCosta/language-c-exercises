#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
/*  Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando quantas vezes a segunda string lida está contida
dentro da primeira.     */
typedef struct Text{
    char frase[N];
}text;

text *realizaAlocacao(){
    text *vet = (text *)malloc(2 * sizeof(text));

    for(int i = 0; i < 2; i++){
        printf("String[%d]: ", i + 1);
        fgets(vet[i].frase, N, stdin);
    }

    return vet;
}

int verificaQntsOcorrencias(const char *str1, const char *str2){
    char *pos = (char *)str1;
    int count = 0;

    // Procura a segunda string dentro da primeira
    while((pos = strstr(pos, str2)) != NULL){
        count++;
        pos += strlen(str2);
    }

    return count;
}

int main(){
    text *p = realizaAlocacao();

    // Função para verificar quantas ocorrências acontecem
    int ocorrencias = verificaQntsOcorrencias(p[0].frase, p[1].frase);

    printf("\nA segunda string ocorre %d vezes na primeira.\n", ocorrencias);

    // Libera a memória alocada dinamicamente.
    free(p);

    return 0;
}
