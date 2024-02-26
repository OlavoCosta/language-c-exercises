#include <stdio.h>
/*
Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela
quantos valores negativos ela possui.
*/
int main(){
    int mat[4][4];
    int count = 0;

    printf("Insira os valores para preencher a matriz\n");   
    for(int linha = 0; linha < 4; linha++){
        for(int coluna = 0; coluna < 4; coluna++){
            printf("Matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);

            if(mat[linha][coluna] < 0){
                count++;
            }
        }
    }

    if(count > 0){
        printf("\nA matriz possui %d numeros menor que zero!", count);
    }else{
        printf("\nMatriz nao possui numero menor que zero!");
    }

    return 0;
}