#include <stdio.h>

int main(){

    int i, numeros[5];

    printf("Insira valores inteiros:\n");
    for(i = 0; i < 6; i++){
        scanf("%d", &numeros[i]);
    }

    printf("\nValores lidos: ");
    for(i = 0; i < 6; i++){
        printf("%d ", numeros[i]);
    }

    return 0;
}