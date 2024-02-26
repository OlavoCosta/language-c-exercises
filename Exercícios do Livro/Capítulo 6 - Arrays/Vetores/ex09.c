#include <stdio.h>
/*
Faça um programa que receba do usuário dois arrays, A e B, com 10
números inteiros cada. Crie um novo array C calculando C = A – B. Mostre
na tela os dados do array C.
*/
void realizaSubtracaoVetores(int A[], int B[]){
    int C[10];

    printf("\nValores do vetor C apos operacao de subtracao entre vetores A e B\n");
    for(int i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
        printf("C[%d]: %d\n", i, C[i]);
    }
}

int main(){
    int A[10];
    int B[10];

    printf("Determine valores para o vetor A\n");
    for(int i = 0; i < 10; i++){
        printf("Vetor A numero[%d]: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nDetermine valores para o vetor B\n");
    for(int i = 0; i < 10; i++){
        printf("Vetor B numero[%d]: ", i + 1);
        scanf("%d", &B[i]);
    }

    realizaSubtracaoVetores(A, B);

    return 0;
}