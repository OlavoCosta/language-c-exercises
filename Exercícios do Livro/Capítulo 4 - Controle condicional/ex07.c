#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. 
Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

  MG RJ SP MS
	7  15 12 8
*/

// Limpa o buffer de entrada, stdin.
void limpezaDoBuffer(){
	char clear;
	while((clear = getchar()) != '\n' && clear != EOF){}
}

int main(){
    // Estados armazenados em uma matriz, evitando erros e complicações.
	char estados[][3] = {"MG", "MS", "RJ", "SP"};
    // Taxas armazenadas respectivamente, correspondendo aos estados.
    float taxas[] = {7, 8, 15, 12};
    char recebeEstado[3];
    float valorProduto, valorFinal = 0;
    int estadoValido = 0;

	printf("Valor produto\nR$");
	scanf("%f", &valorProduto);
	printf("Compra realizada em\nEstado: ");
	// Realiza a limpeza do buffer.
	limpezaDoBuffer();
	fgets(recebeEstado, 3, stdin);

    // Verifica se o estado é válido e realiza o calculo de acordo com estado determinado.
    for(int i = 0; i < 4; i++){
        if(strcmp(recebeEstado, estados[i]) == 0){
            valorFinal = valorProduto + (valorProduto * taxas[i] / 100);
            // Caso estadoValido ainda seja 0, a condicional abaixo irá executar apenas o comando else.
            estadoValido = 1;
            break;
        }
    }

    if(estadoValido == 1){
        printf("\nValor final do produto\nR$%.2f\n", valorFinal);
    }else{
        printf("\nEstado digitado nao e valido.\n");
    }
	
    return 0;
}