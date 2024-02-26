#include <stdio.h>
/*
Escreva um programa que leia certa quantidade de números, imprima o
maior deles e quantas vezes o maior número foi lido. A quantidade de
números a serem lidos deve ser fornecida pelo usuário.
*/
int main(){
    int N;
    int numeros[N];
    int maior = 0;
    int contador = 0;

    printf("Determine a quantidade de numeros a serem armazenados\nN: ");
    do{
        scanf("%d", &N);
        if(N < 0){
            printf("N: ");
        }
    }while(N < 0);

    printf("\nInforme os valores\n");
    for(int i = 0; i <= N; i++){

        scanf("%d", &numeros[i]);
        if(numeros[i] > maior){
            maior = numeros[i];
            contador++;
        }
    }

    printf("O maior numero lido e: %d\nO maior foi lido %d vez!", maior, contador);

    return 0;
}