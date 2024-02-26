#include <stdio.h>
#include <math.h>
/*
Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida,
calcule e imprima a matriz B, sendo que B = A².
*/
void imprimeMatriz(int A[5][5]){
    printf("\nMatriz A[5][5]\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("[%d]", A[i][j]);
        }
        printf("\n");
    }
}

void realizaConversaoMatriz(int A[5][5], int B[5][5]){
    printf("\nMatriz B[5][5] Calculada\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            B[i][j] = pow(A[i][j], 2);
            printf("[%d]", B[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int A[5][5];
    int B[5][5];

    printf("Insira valores para matriz A\n");
    for(int linha = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 5; coluna++){
            printf("A[%d][%d]: ", linha, coluna);
            scanf("%d", &A[linha][coluna]);
        }
    }

    imprimeMatriz(A);

    realizaConversaoMatriz(A, B);

    return 0;
}