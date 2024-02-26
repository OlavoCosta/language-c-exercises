#include <stdio.h>
/*
Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três
provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior
nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o
número de alunos cuja pior nota foi na prova 3.
*/
void verificaAlunoPiorNota(float mat[10][3]){
    int prova1 = 0;
    int prova2 = 0;
    int prova3 = 0;

    for(int i = 0; i < 10; i++){
        if(mat[i][0] < mat[i][1] && mat[i][0] < mat[i][2]){
            prova1++;
        }else if(mat[i][1] < mat[i][0] && mat[i][1] < mat[i][2]){
            prova2++;
        }else{
            prova3++;
        }
    }
    printf("\nQuantidade de alunos com notas ruins nas respectivas provas\nProva 1: %d\nProva 2: %d\nProva 3: %d", prova1, prova2, prova3);
}

int main(){
    float mat[10][3];

    printf("Insira a nota dos alunos\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 3; j++){
            printf("Aluno %d prova %d: ", i + 1, j + 1);
            scanf("%f", &mat[i][j]);
        }
        printf("\n");
    }

    verificaAlunoPiorNota(mat);

    return 0;
}