#include <stdio.h>

/*
Leia quatro valores do tipo float. Calcule e exiba a média
aritmética desses valores.

*/

int main(){
    float media = 0, num[4];

    printf("Determine os numeros\n");
    for(int i = 0; i < 4; i++){
        printf("Numero %d: ", i+1);
        scanf("%f", &num[i]);
        media = (media + num[i]);
    }

    printf("\nMedia aritmetica: %.2f", media /= 4);

    return 0;
}