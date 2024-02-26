#include <stdio.h>
/*
Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os
elementos desse vetor e imprima o vetor na tela.
*/
void ordenarVetor(float v[], int tam){

    for(int i = 0; i < tam - 1; ++i){
        for(int j = 0; j < tam - i - 1; ++j){
            if(v[j] > v[j + 1]){
                // Troca os elementos se estiverem fora de ordem
                float temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n = 10;
    float vet[n];

    printf("Digite os %d numeros do vetor:\n", n);
    for(int i = 0; i < n; ++i){
        printf("vetor[%d]: ", i);
        scanf("%f", &vet[i]);
    }

    // Chamada de função para ordenar o vetor
    ordenarVetor(vet, n);

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < n; ++i) {
        printf("%.2f ", vet[i]);
    }

    return 0;
}