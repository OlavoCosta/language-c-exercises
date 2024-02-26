#include <stdio.h>
/*
Elabore um programa que peça ao usuário para digitar 10
valores. Some esses valores e apresente o resultado na tela.
*/
int main(){
    float valores[10];
    float soma = 0;

    printf("Informe dez valores\n");

    for(int i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%f", &valores[i]);
        soma += valores[i];
    }

    printf("\nSoma: %.1f", soma);

    return 0;
}