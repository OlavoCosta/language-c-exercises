#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e
imprima a soma dos elementos dessa matriz que não pertencem à diagonal
principal nem à diagonal secundária.
*/
void imprimeMatriz(int mat[5][5]){
    printf("\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }
}

int verificaSomaElementos(int mat[5][5]){
    int soma = 0;

    for(int linha = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 5; coluna++){
            if(((linha && coluna == 0) || (linha && coluna == 1) || 
                (linha && coluna == 2) || (linha && coluna == 3) || 
                (linha && coluna == 4))){
                soma += mat[linha][coluna];
            }
        }
    }
    return soma;
}

int main(){
    int mat[5][5];

    printf("Insira valores para a matriz\n");
    for(int linha = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 5; coluna++){
            printf("matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }

    imprimeMatriz(mat);

    int soma = verificaSomaElementos(mat);

    printf("\nA soma dos elementos, exceto diagonal principal e: %d", soma);

    return 0;
}