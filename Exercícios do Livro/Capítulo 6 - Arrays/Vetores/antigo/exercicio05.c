#include <stdio.h>

int main(){

    int i;
    double X, Y, soma, vet[8];
    
    printf("Insira os numeros desejados\n");
    for(i = 0; i < 8; i++){
        scanf("%lf", &vet[i]);
    }

    printf("Insira dois valores\n");
    scanf("%lf", &X);
    while(X < 0 || X > 8){
        printf("Valor de X invalido!\nInsira novamente: ");
        scanf("%lf", &X);
    }

    scanf("%lf", &Y);
    while(Y < 0 || Y > 8){
        printf("Valor de Y invalido!\nInsira novamente: ");
        scanf("%lf", &Y);
    }

    soma = 0;
    
    for(i = 0; i < 8; i++){
        if(i == X){
            soma = vet[i];
        }
    }

    for(i = 0; i < 8; i++){
        if(i == Y){
            soma += vet[i];
        }
    }

    printf("Soma das posicoes: %.0lf", soma);

    return 0;
}