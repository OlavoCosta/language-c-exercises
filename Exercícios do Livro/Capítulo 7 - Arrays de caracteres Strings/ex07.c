#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
/*  Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.  */
typedef struct Palindromo{
    char palavra[N];
}palindromo;

void verificaStringPalindromo(palindromo *p){
	int count = 0;

	while((p->palavra[count] != ' ') && (p->palavra[count] != '\0') && 
          (p->palavra[count] != '\n')){
		count++;
	}

	// Remove o caractere de nova linha '\n'
	if(p->palavra[count] == '\n'){
        p->palavra[count] = '\0';
	}

	char temp[count + 1];  // Adiciona +1 para incluir o caractere nulo '\0'
	int aux = count - 1;

	for(int i = 0; i < count; i++){
		temp[aux] = p->palavra[i];
		aux--;
	}

	temp[count] = '\0';  // Adiciona o caractere nulo no final da string invertida

	int verf = strcmp(p->palavra, temp);

	if(verf == 0)
		printf("\nPalavra inserida e um Palindromo!");
	else
		printf("\nPalavra nao e Palindromo!");

}

palindromo* realizaAlocacaoString(){

	palindromo *p = (palindromo*)malloc(sizeof(palindromo));

	printf("Escreva uma palavra: ");
	fgets(p->palavra, N, stdin);
	
	return p;
}

int main(){
    palindromo *p = realizaAlocacaoString();

    verificaStringPalindromo(p);

	// Realiza a limpeza da memória alocada dinamicamente
    free(p);
	
	return 0;
}