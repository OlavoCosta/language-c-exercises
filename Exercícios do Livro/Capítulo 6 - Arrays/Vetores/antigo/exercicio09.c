#include <stdio.h>

int main(){

    int i, cont = 0;
    int A[10], B[10], C[10];

    printf("Insira numeros inteiros desejados\n");
    for(i = 0; i < 10; i++){
        cont += 1;
        printf("Numero %d array[A]: ", cont);
        scanf("%d", &A[i]);
    }

    cont = 0;

    for(i = 0; i < 10; i++){
        cont += 1;
        printf("Numero %d array[B]: ", cont);
        scanf("%d", &B[i]);
    }

    printf("\nDados do array[C]: ");
    for(i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }

    return 0;
}