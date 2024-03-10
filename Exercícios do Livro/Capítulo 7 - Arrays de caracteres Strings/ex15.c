#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*    Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em que elas apareceriam em um dicionário.    */

// Definindo a estrutura para armazenar uma string.
typedef struct StringStruct{
	char *str;
}stringsWord;

// Função responsável por comparar duas strings.
int compareStrings(const void *a, const void *b){
	
    // Retorna o resultado das strings comparadas.
	return strcmp(((struct StringStruct*) a)->str, ((struct StringStruct*) b)->str);
}

// Função para ler uma string dinamicamente.
char* alocaString(){
	char phrase[300];

    fgets(phrase, 300, stdin);

	// Alocando memória para armazenar a string inserida pelo usuário.
	char *str = (char *)malloc(strlen(phrase) + 1);
		if(str != NULL){
			strcpy(str, phrase);
		}
	
	return str;
}

int main(){
	stringsWord strings[2];

	printf("Digite a primeira string: ");
	strings[0].str = alocaString();
	printf("Digite a segunda string: ");
	strings[1].str = alocaString();

	// qsort responsável por ordenar alfabeticamente as strings.
	qsort(strings, 2, sizeof(struct StringStruct), compareStrings);

	// Imprimindo as strings em ordem alfabética.
	printf("\nStrings em ordem alfabetica:\n");
	for(int i = 0; i < 2; i++){

		printf("%s", strings[i].str);
		// Liberando a memória alocada para cada string.
		free(strings[i].str);
	}

	return 0;
}