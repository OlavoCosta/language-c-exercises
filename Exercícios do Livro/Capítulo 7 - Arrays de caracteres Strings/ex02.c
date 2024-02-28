#include <stdio.h>
#include <stdlib.h>
/*  Faça um programa que leia uma string e imprima as quatro primeiras letras dela.        */
typedef struct Frase{
    char vet[100];
}frase;

void realizaImpressao(frase *p){
	printf("\nAs 4 primeiras letras sao: ");
		
	for(int i = 0; i < 4; i++){
		printf("%c ", p->vet[i]);
	}
}

frase* alocaFraseDinamicamente(){

	printf("Redija: ");
	frase *p = (frase*)malloc(sizeof(frase));
	fgets(p->vet, 100, stdin);
	
	realizaImpressao(p);

	return p;
}

int main(){
	frase *p = alocaFraseDinamicamente();
	
    // Realiza limpeza dos dados
	free(p);
	
    return 0;
}