#include <stdio.h>

int main(){

    int i, cont = 0;
    int pares[10];

    printf("Insira numeros inteiros\n");

    for(i = 0; i < 10; i++){
        scanf("%d", &pares[i]);
    }

    for(i = 0; i < 10; i++){
        if(pares[i] % 2 == 0){
            cont += 1;
        }
    }

    printf("Foram inseridos %d numeros pares.", cont);

    return 0;
}