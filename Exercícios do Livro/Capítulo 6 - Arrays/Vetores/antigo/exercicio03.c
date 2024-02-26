#include <stdio.h>

int i;

void impressaoConteudo(int *num){

    for(i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }
}

int main(){

    int num[6];
    double media = 0;

    printf("Insira numeros inteiros:\n");

    for(i = 0; i < 5; i++){

        scanf("%d", &num[i]);
        media += num[i];
        
    }

    impressaoConteudo(num);

    printf("\nMedia: %.0lf", media = media / 5);

    return 0;
}