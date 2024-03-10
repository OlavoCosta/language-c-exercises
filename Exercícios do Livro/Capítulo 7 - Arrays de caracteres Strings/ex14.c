#include <stdio.h>
#include <stdlib.h>
/*      O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta 'n' posições após ela no alfabeto. Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim por diante. Escreva um programa que faça uso desse código de César para três posições. Entre com uma string e imprima a string codificada. 

Exemplo:
		String: a ligeira raposa marrom saltou sobre o cachorro cansado. 
		Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fd      */

// Estrutura responsável por armazenar o dado string.
typedef struct Text{
	char phrase[300];
}text;

// Função responsável por alocar a string inserida pelo usuário.
void alocandoFrase(text *phr){
	
	printf("\nEscreva: ");
	fgets(phr->phrase, sizeof(phr->phrase), stdin);
}

// Função responsável por realizar a criptografia da string.
void realizaCriptografiaDaString(text *phr){
	int i = 0;

	while(phr->phrase[i] != '\0'){
		
		if(phr->phrase[i] >= 'a' && phr->phrase[i] <= 'z'){
			phr->phrase[i] = ((phr->phrase[i] - 'a' + 3) % 26) + 'a';
		}else if(phr->phrase[i] >= 'A' && phr->phrase[i] <= 'Z'){
			phr->phrase[i] = ((phr->phrase[i] - 'A' + 3) % 26) + 'A';
		}
		i++;
	}

	printf("\nFrase Criptografada: %s", phr->phrase);
}

int main(){
	printf("\n\t\t\t\tCRIPTOGRAFIA DE CESAR\n");
	// Declaração da struct para armazenar a string.
	text myPhrase;

	// Chamada de função para realizar a alocação da frase inserida pelo usuário.
	alocandoFrase(&myPhrase);

	// Chamada de função para realizar a criptografia da string.
  realizaCriptografiaDaString(&myPhrase);

	return 0;
}