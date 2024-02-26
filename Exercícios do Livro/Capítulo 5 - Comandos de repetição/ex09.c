#include <stdio.h>
/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/
void verificaMenorMenor(float numeros[], float *menor, float *maior){
    *menor = numeros[0];
    *maior = numeros[0];

    for(int i = 0; i < 10; i++){
		if(numeros[i] < *menor){
			*menor = numeros[i];
		}
		if(numeros[i] > *maior){
			*maior = numeros[i];
		}
    }
}

int main(){
	float numeros[10];
	float menor, maior;

	printf("Determine 10 numeros\n");

	for(int i = 0; i < 10; i++){
		printf("Numero %d: ", i + 1);
		scanf("%f", &numeros[i]);

		verificaMenorMenor(numeros, &menor, &maior);
	}

	printf("\nMenor: %.1f\nMaior: %.1f", menor, maior);

	return 0;
}
