#include <stdio.h>
/*
Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao final, imprima
esse vetor na tela.
*/
int main(){
    int vet[100];
    int count = 1;
    int i = 1;

    printf("Preenchendo vetor com numeros naturais que nao sao multiplos de 7\n");
    while(i < 100){
        if(count % 7 != 0){
            vet[i] = count;
            i++;
        }
        count++;
    }

    for(int i = 0; i < 100; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}