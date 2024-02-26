#include <stdio.h>
/*
Crie um programa que leia do teclado seis valores inteiros e em seguida
mostre na tela os valores lidos na ordem inversa.
*/
int main(){
    int numeros[6];

    printf("Insira numeros inteiros\n");
    
    for(int i = 0; i < 6; i++){
        printf("Numero[%d]: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("%d\n", numeros[i]);
    }

    return 0;
}