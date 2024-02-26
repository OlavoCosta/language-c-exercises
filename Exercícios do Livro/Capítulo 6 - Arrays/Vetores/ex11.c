#include <stdio.h>
#include <math.h>
/*
Leia um conjunto de números reais, armazenando-o em vetor. Em seguida,
calcule o quadrado de cada elemento desse vetor, armazenando esse
resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos.
Imprima os dois conjuntos de números.
*/
void calculandoQuadradoConjunto1(float *conj1, float *conj2){
    for(int i = 0; i < 20; i++){
        conj2[i] = pow(conj1[i], 2);
    }
    printf("\nQuadrado do Conjunto1\n");
}

int main(){
    float conjunto1[20];
    float conjunto2[20];

    printf("Determine os valores do conjunto de reais\n");
    for(int i = 0; i < 20; i++){
        printf("Numero[%d]: ", i + 1);
        scanf("%f", &conjunto1[i]);
    }

    calculandoQuadradoConjunto1(conjunto1, conjunto2);

    for(int i = 0; i < 20; i++){
        printf("Conjunto2[%d]: %.1f\n", i + 1, conjunto2[i]);
    }

    return 0;
}