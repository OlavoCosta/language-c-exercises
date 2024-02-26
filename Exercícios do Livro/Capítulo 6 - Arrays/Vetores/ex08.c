#include <stdio.h>
/*
Faça um programa que preencha um vetor com 10 números reais. 
Em seguida, calcule e mostre na tela a quantidade de números negativos e a
soma dos números positivos desse vetor
*/
void verificaNumerosnegativosSomapositivos(float vet[]){
    int negativos = 0;
    float soma = 0.0;

    for(int i = 0; i < 10; i++){
        // Soma dos números positivos.
        if(vet[i] > 0){
            soma += vet[i];    
        }else{ 
            // Quantidade de números negativos.
            negativos += 1;
        }
    }

    printf("\nQuantidade de numeros negativos: %d\nSoma = %.1f", negativos, soma);
}

int main(){
    float vet[10];

    printf("Determine os valores\n");

    for(int i = 0; i < 10; i++){
        printf("Numero[%d]: ", i + 1);
        scanf("%f", &vet[i]);
    }

    verificaNumerosnegativosSomapositivos(vet);

    return 0;
}