#include <stdio.h>
/*
Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela.
*/
void imprimeMatriz(int mat[5][5]){
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("[%d]", mat[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int mat[5][5];
	int count = 0;
	
  	printf("Matriz preenchida\n");
	for(int linha = 0; linha < 5; linha++){
		for(int coluna = 0; coluna < 5; coluna++){
			mat[linha][coluna] = 0;

			if(linha == count && coluna == count){
				mat[linha][coluna] = 1;
			}
		}
		count++;
	}

  	imprimeMatriz(mat);
	
  	return 0;
}