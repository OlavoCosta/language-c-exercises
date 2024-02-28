#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 100
/*  Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.      */
typedef struct Text{
    char frase[N];
}text;

void realizaLimpezaBuffer(){
    char clear;
    while((clear = getchar()) != '\n' && clear != EOF){}
}

char caracSubstituicao(){
    char carac;
    
    printf("\nPara substituir as vogais da frase, determine um caractere: ");
    scanf("%c", &carac);

    return carac;
}

void realizaTratamentoString(text *p, char c){
    int count = 0;

    for(int i = 0; p->frase[i] != '\0'; i++){
        // Verifica e determina a quantidade de vogais encontradas
        char lowercaseChar = tolower(p->frase[i]);
        
        if (strchr("aeiou", lowercaseChar) != NULL){
            count += 1;
            // Realiza troca dos caracteres pelo caracter determinado
            p->frase[i] = c;
        }
    }

    printf("\nFrase apos tratamento: %sContendo: %d vogais", p->frase, count);
}

text* realizaAlocacao(){
    // Recebe o caractere que irá substituir as vogais 
    char c = caracSubstituicao();
    realizaLimpezaBuffer();

    text *p = (text*)malloc(sizeof(text));

    printf("Redija a frase: ");
    fgets(p->frase, N, stdin);

    realizaTratamentoString(p, c);

    return p;
}

int main(){
    text *p = realizaAlocacao();

    // Realiza a limpeza da memória alocada dinamicamente
    free(p);

    return 0;
}