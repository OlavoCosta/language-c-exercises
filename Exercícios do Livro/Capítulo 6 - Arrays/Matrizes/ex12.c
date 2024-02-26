#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e
imprima a soma dos elementos dessa matriz que estão abaixo da diagonal
principal.
*/
void imprimeMatriz(int mat[6][6]){
    printf("\n");

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }
}

int verificaSomaMatriz(int mat[6][6]){
    int soma = 0;

    for(int linha = 1; linha < 6; linha++){
        for(int coluna = 0; coluna < linha; coluna++){
            soma += mat[linha][coluna];
        }
    }
    return soma;
}

int main(){
    int mat[6][6];

    printf("Insira valores para a matriz\n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    imprimeMatriz(mat);

    int soma = verificaSomaMatriz(mat);

    printf("\nSoma da matriz inferior a diagonal principal e: %d", soma);

    return 0;
}