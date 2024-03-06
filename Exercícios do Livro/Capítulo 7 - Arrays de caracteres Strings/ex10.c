#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100
/*    Escreva um programa que leia uma string do teclado e converta todos os
seus caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código
ASCII está entre 97 e 122.      */
typedef struct Text{
    char word[N];
}text;

// Realiza conversão da string para maiúscula
void realizaTratamentoString(text *p){

    for(int i = 0; p->word[i] != '\0'; i++){
        p->word[i] = toupper(p->word[i]);
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

    printf("\n\t\tConversor de frase para MAIUSCULA\n");
    text *p = realizaAlocacao();

    // Realiza a liberação da memória alocada dinamicamente
    free(p);

    return 0;
}