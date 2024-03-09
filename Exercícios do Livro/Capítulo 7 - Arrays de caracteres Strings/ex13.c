#include <stdio.h>
#include <stdlib.h>
/*   Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.       */

// Estrutura para armazenar valores inteiros positivos, responsáveis pelo intervalo da string.
typedef struct Segmentos{
    int i;
    int j;
}segmentos;

// Estrutura para armazenar string.
typedef struct TextData{
    char S[100];
}textdata;

// Função responsável por atribuir valores inteiros positivos a estrutura segmentos.
segmentos* alocaValoresInteiros(){
    segmentos *x = (segmentos*)malloc(sizeof(segmentos));

    do{
        // Determina que o valor de (i) seja positivo.
        do{
            printf("Valor de i: ");
            scanf("%d", &x->i);
        }while(x->i < 0);

        // Determina que o valor de (j) seja positivo.
        do{
            printf("Valor de j: ");
            scanf("%d", &x->j);
        }while(x->j < 0);

        if(x->i > x->j){
            printf("Erro: i deve ser menor ou igual a j.\n");
        }

    }while(x->i > x->j); // Garante que o valor de i seja menor que o de j.

    return x;
}

// Função responsável por imprimir a string do segmento i a j da string S.
void imprimeCaracteresContidosNoSegmento(textdata *p, segmentos *x){

    printf("\nImprime string do indice [i] = %d ao [j] = %d\n", x->i, x->j);
    for(int k = x->i; k <= x->j; k++){
        printf("%c", p->S[k]);
    }
}

// Função responsável por alocar dados dinamicamente.
textdata* alocaDadosDinamicamente(){

    // Realiza alocação da string desejada
    textdata *p = (textdata*)malloc(sizeof(textdata));

    printf("\nEscreva: ");
    fgets(p->S, 100, stdin);

    // Chamada de função para alocar dinamicamente os valores inteiros positivos
    segmentos *x = alocaValoresInteiros();

    // Chamada de função para realizar a impressão do segmento que vai de i a j da string S.
    imprimeCaracteresContidosNoSegmento(p, x);

    // Realiza a liberação da memória alocada dinamicamente.
    free(x);

    return p;
}

int main(){
    
    printf("\n\t\tImprime caracteres do Segmento a seguir\n");
    // Chamada de Função para realizar alocação dinâmica dos dados.
    textdata *p = alocaDadosDinamicamente();

    // Realiza a liberação da memória alocada dinamicamente.
    free(p);

    return 0;
}