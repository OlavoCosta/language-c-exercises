#include <stdio.h>
/*
Faça um programa que permita ao usuário entrar com uma matriz de
tamanho 3 × 3 de números inteiros. Em seguida, calcule um vetor contendo
três posições, em que cada posição deverá armazenar a soma dos números
de cada coluna da matriz. Exiba na tela esse array. 
*/
void imprimeMatriz(int mat[3][3]){
    printf("\n");

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("[%d]", mat[l][c]);
        }
        printf("\n");
    }
}

int main(){
    int mat[3][3];
    int vet[3];

    printf("Insira os valores para a matriz\n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }

    imprimeMatriz(mat);

    for(int coluna = 0; coluna < 3; coluna++){
        int soma = 0;

        for(int linha = 0; linha < 3; linha++){
            soma += mat[linha][coluna];
        }
        vet[coluna] = soma;
        printf("\nSoma do Array[%d] = %d", coluna, vet[coluna]);
    }

    return 0;
}