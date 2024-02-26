#include <stdio.h>
/*
Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela
o menor valor contido nessa matriz.
*/
int main(){
    float mat[3][3];
    float menor;

    printf("Preencha a matriz com os valores desejado\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);

            if(mat[0][0]){
                menor = mat[0][0];
            }else if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        }
        printf("\n");
    }

    printf("Menor valor da matriz[3][3]: %.2f\n", menor);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%.0f] ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}