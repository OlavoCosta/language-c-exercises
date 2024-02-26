#include <stdio.h>
/*
Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos
valores contidos em sua diagonal secundária
*/

// Imprime matriz.
void imprimeMatriz(int mat[3][3]){
    printf("\n");

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("[%d]", mat[l][c]);
        }
        printf("\n");
    }
}

// Soma diagonal secundária.
int somaDiagonalSecundaria(int mat[3][3]){
    int soma = 0;

    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            if((linha == 0 && coluna == 2) || (linha == 1 && coluna == 1) || (linha == 2 && coluna == 0)){
                soma += mat[linha][coluna];
            }
        }
    }
    return soma;
}

int main(){
    int mat[3][3];

    printf("Determine os valores para a matriz\n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }

    imprimeMatriz(mat);

    int soma = somaDiagonalSecundaria(mat);

    if(soma != 0){
        printf("\nSoma da diagonal secundaria = %d", soma);
    }else{
        printf("\nDiagonal secundaria igual a zero!");
    }

    return 0;
}