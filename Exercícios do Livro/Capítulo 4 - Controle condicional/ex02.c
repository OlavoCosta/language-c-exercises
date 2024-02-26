#include <stdio.h>
/*
Faça um programa que leia dois números e mostre o maior
deles. Se, por acaso, os dois números forem iguais, imprima a
mensagem “Números iguais”
*/

int main(){
    float numero[2], maior = 0;

    printf("Insira dois numeros\n");

    for(int i = 0; i < 2; i++){
        
       do{
            scanf("%f", &numero[i]);

            if(numero[i] > maior){
                maior = numero[i];
            }else if(numero[0] == numero[1]){
                printf("Numeros Iguais!");
            }
        }while(numero[i] < 0);
    }

    if(numero[0] != numero[1])
        printf("O maior e: %.1f", maior);

    return 0;
}