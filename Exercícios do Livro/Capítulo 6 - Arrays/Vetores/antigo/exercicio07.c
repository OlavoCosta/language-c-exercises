#include <stdio.h>

int main(){

    int i;
    double maior, menor, numero[10];

    printf("Insira os numeros desejados\n");

    for(i = 0; i < 10; i++){
        scanf("%lf", &numero[i]);
    }  

    maior = numero[0];
    menor = maior;

    for(i = 0; i < 10; i++){

        if(numero[i] > maior){
            maior = numero[i];
        }
        if(numero[i] < menor){
            menor = numero[i];
        }
    }

    printf("Maior numero = %.2lf\nMenor numero = %.2lf", maior, menor);

    return 0;
}