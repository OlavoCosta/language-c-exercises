#include <stdio.h>

/*
Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos:
    a) Atribua os seguintes valores a esse array: 1, 0, 5, –2, –5, 7.
    b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma.
    c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
    d) Mostre na tela cada valor do array A, um em cada linha.
*/

int main(){

    int i, soma = 0; 
    int A[6] = {1,0,5,-2,-5,7};
    
    for(i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i == 5){
            soma += A[i];
        }
    }

    printf("\n%d\n", soma);

    A[4] = 100;

    for(i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}