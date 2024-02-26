#include <stdio.h>
/*  Elabore um programa que leia dois números inteiros e exiba o
deslocamento, à esquerda e à direita, do primeiro número pelo
segundo.        */
int main(){
    int num[2];

    for(int i = 0; i < 2; i++){
        printf("Digite o primeiro numero inteiro: ");
        scanf("%d", &num[i]);
    }
    
    // Realiza o deslocamento à esquerda do primeiro número pelo segundo
    int deslocamentoEsquerda = num[0] << num[1];

    // Realiza o deslocamento à direita do primeiro número pelo segundo
    int deslocamentoDireita = num[0] >> num[1];

    printf("Deslocamento a esquerda: %d\nDeslocamento a direita: %d\n", deslocamentoEsquerda, deslocamentoDireita);

    return 0;
}