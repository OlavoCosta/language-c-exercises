#include <stdio.h>

int main(){

    int i, numNegativos = 0;
    double soma = 0, numeros[10] = {1.3, -4.58, 7.87, 8.13, -9.02, 10.0, -3.5, 3.14, -6.26, 9.96};

    for(i = 0; i < 10; i++){
        if(numeros[i] < 0){
            numNegativos += 1;
        }else{
            soma += numeros[i];
        }
    }

    printf("Quantidade numeros negativos: %d\nSoma dos positivos: %.2lf", numNegativos, soma);

    return 0;
}