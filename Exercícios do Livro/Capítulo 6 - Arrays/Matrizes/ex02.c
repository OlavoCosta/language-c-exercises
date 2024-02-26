#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela
o maior valor contido nessa matriz e a sua localização (linha e coluna).
*/
int main(){
    int matriz[4][4];
	int maior = 0, apoio, contLin = 0, contCol = 0;
	
    printf("Determine os dados para a matriz:\n");
  
    for(int i = 0; i < 4; i++){
	    for(int j = 0; j < 4; j++){
            printf("Linha [%d] Coluna [%d] : ", contLin, contCol);
            scanf("%d", &matriz[i][j]);

            apoio = matriz[i][j];

            if(maior < apoio)
                maior = apoio;

            if(contCol < 3)
                contCol++;
            else
                contCol = 0;
	    }

        if(contLin < 4)
            contLin++;
        else
            contLin = 0;
        
    }

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(matriz[i][j] == maior){
				printf("\nPosicao do maior valor na matriz\nLinha: [%d]\nColuna: [%d]\n",i,j);
			}
		}
	}

    printf("\nMaior valor: %d\n\n", maior);

    return 0;
}