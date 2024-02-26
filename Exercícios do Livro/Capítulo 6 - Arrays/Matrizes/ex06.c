#include <stdio.h>
/*
Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos
valores contidos em sua diagonal principal.
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

// Realiza soma da diagonal principal da matriz.
int verificaSomaDiagonal(int mat[3][3]){
    int soma = 0;
    int count = 0;

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            if(l == count && c == count){
                soma += mat[l][c];
            }
        }
        count++;
    }
    return soma;
}

int main(){
    int mat[3][3];

    printf("Soma dos conteudos da matriz na diagonal principal\n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }

    imprimeMatriz(mat);

    int SomaDiagonal = verificaSomaDiagonal(mat);

    if(SomaDiagonal != 0){
        printf("\nSoma da diagonal principal da matriz = %d", SomaDiagonal);
    }else{
        printf("\nDiagonal principal igual a zero!");
    }

    return 0;
}