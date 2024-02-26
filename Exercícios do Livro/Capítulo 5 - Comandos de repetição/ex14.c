#include <stdio.h>
/*
Escreva um programa que leia um número inteiro, maior ou
igual a zero, do usuário. Imprima o enésimo termo da
sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado
pela soma dos dois termos anteriores. Alguns termos dessa
sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

    Fn = Fn-1 + Fn-2
*/

int main(){
    int N, termo1 = 0, termo2 = 1, proximo;

    printf("Quantos termos da sequencia de Fibonacci deseja imprimir? ");
    scanf("%d", &N);

    printf("Sequencia de Fibonacci com %d termos:\n", N);

    for(int i = 0; i < N; i++){
        if(i <= 1){
            proximo = i;
        }else{
            proximo = termo1 + termo2;
            termo1 = termo2;
            termo2 = proximo;
        }
        printf("%d ", proximo);
    }
    printf("\n");

    return 0;
}

