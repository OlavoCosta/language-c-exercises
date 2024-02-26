#include <stdio.h>
#include <string.h>

int main(){

    int i, j, numeros[6];

    printf("Insira valores inteiros:\n");
    for(i = 0; i < 6; i++){
        scanf("%d", &numeros[i]);
    }

    for(j = 5; j >= 0; j--){
        printf("%d ", numeros[j]);
    }

    return 0;
}