#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 5 × 5. 
Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal ou secundária. 
Calcule também a soma dos elementos que não pertencem a nenhuma das duas diagonais. 
Imprima na tela a diferença entre os dois valores.
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

// Realiza a soma da diagonal principal.
int verificaSomaDiagonalPrincipal(int mat[5][5]){
    int soma = 0;

    for(int linha = 0; linha < 5; linha++){
        soma += mat[linha][linha];
    }
    return soma;
}

int verificaSomaElementosNaoDiagonais(int mat[5][5]){
    int soma = 0;

    for(int linha = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 5; coluna++){
            if(linha != coluna && coluna != 4 - linha){
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

    int somaDiagonal = verificaSomaDiagonalPrincipal(mat);

    int somaElementosNaoDiagonais = verificaSomaElementosNaoDiagonais(mat);

    printf("\nSoma da diagonal principal: %d\nSoma dos elementos que nao pertence as diagonais: %d", somaDiagonal, somaElementosNaoDiagonais);

    return 0;
}