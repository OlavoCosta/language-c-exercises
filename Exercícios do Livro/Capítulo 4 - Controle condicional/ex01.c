#include <stdio.h>
/*
Faça um programa que leia dois números e mostre qual deles
é o maior.
*/

int main(){
    int indice = 2;
    int numero[indice], maiorNumero = 0;

    printf("Insira dois numeros\n");
    
    for(int i = 0; i < indice; i++){
        scanf("%d", &numero[i]);
        if(maiorNumero < numero[i]){
            maiorNumero = numero[i];
        }
    }

    printf("\nMaior numero: %d", maiorNumero);

    return 0;
}