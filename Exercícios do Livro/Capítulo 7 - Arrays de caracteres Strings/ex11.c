#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100
/*    Escreva um programa que leia uma string do teclado e converta todos os
seus caracteres em minúscula. Dica: some 32 dos caracteres cujo código
ASCII está entre 65 e 90.      */
typedef struct Text{
    char word[N];
}text;

// Realiza conversão da string para minúscula
void realizaTratamentoString(text *p){

    for(int i = 0; p->word[i] != '\0'; i++){
        p->word[i] = tolower(p->word[i]);
    }
}

// Realiza alocação dinamicamente
text* realizaAlocacao(){
    text *p = (text*)malloc(sizeof(text));

    printf("\nEscreva: ");
    fgets(p->word, N, stdin);
    
    realizaTratamentoString(p);

    printf("String Convertida: %s", p->word);

    return p;
}

int main(){

    printf("\n\t\tConversor de frase para MINUSCULA\n");
    text *p = realizaAlocacao();

    // Realiza a liberação da memória alocada dinamicamente
    free(p);

    return 0;
}