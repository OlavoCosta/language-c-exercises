#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/*
Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus
elementos são da forma:
              { 2i + 7j - 2 se i < j
    A[i][j] = { 3i² - 1 se i = j
              { 4i³ + 5j² + 1 se i > j
*/

// Imprime matriz.
void imprimeMatriz(int mat[10][10]){
    for(int l = 0; l < 10; l++){
        for(int c = 0; c < 10; c++){
            printf("[%d]", mat[l][c]);
        }
        printf("\n");
    }
}

// Calcula os elementos da matriz de acordo com seu índice.
void calculaElementosMatriz(int mat[10][10]){

    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            if(linha < coluna){
                mat[linha][coluna] = (2 * linha) + (7 * coluna) - 2;
            }else if(linha == coluna){
                mat[linha][coluna] = 3 * linha * linha - 1;
            }else{
                mat[linha][coluna] = 4 * linha * linha * linha + 5 * coluna * coluna + 1;
            }
        }
    }
}

int main(){
    int mat[10][10];

    printf("\tMatriz[10][10]\n");

    srand(time(NULL));
    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            mat[linha][coluna] = rand() % 3;
        }
    }

    imprimeMatriz(mat);

    calculaElementosMatriz(mat);

    printf("\nMatriz calculada!\n");
    imprimeMatriz(mat);

    return 0;
}