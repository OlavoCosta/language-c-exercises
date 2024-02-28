#include <stdio.h>
#include <stdlib.h>
#define N 100
/*   Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui.     */  
typedef struct Texto{
    char frase[N];
}texto;

void verificaQuantidadeCarac(texto *p){
	int count = 0;
	
	while(p->frase[count] != '\0'){
	  count++;
	}

	printf("\nString redigida possui %d caracteres.", count);
}

texto* realizaAlocacao(){

	printf("Escreva: ");
	texto *p = (texto*)malloc(sizeof(texto));
    fgets(p->frase, N, stdin);

	verificaQuantidadeCarac(p);

	return p;
}

int main(){
	texto *p = realizaAlocacao();

    // Realiza Limpeza da memória Heap
	free(p);
	
    return 0;
}