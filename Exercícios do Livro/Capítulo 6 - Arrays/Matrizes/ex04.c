#include <stdio.h>
/*
Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.
*/
int main(){
	int mat[4][4];
	int count = 0;
	
  	printf("Determine valores a matriz\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);

			if(mat[i][j] > 10){
				count += 1;
			}
		}
	}

  	printf("\nA matriz possui %d valores maiores do que 10.", count);
	
  	return 0;
}