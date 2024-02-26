#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e
imprima a soma dos elementos dessa matriz que estão acima da diagonal
principal.
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

int verificaSomaMatriz(int mat[5][5]){
    int c = 0;

    for(int linha = 0; linha < 5; linha++){
        int count = linha + 1;


        for(int coluna = 0; coluna < 5; coluna++){
            if(coluna == count){
                c += mat[linha][coluna];
                count++;
            }
        }
    }
    return c;
}

int main(){
    int mat[5][5];

    printf("Insira valores para a matriz\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    imprimeMatriz(mat);

    int soma = verificaSomaMatriz(mat);

    printf("\nSoma da parte superior a diagonal principal e: %d", soma);

    return 0;
}