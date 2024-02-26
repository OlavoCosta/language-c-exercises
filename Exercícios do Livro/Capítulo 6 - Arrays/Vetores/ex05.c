#include <stdio.h>
/*
Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y 
quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores 
encontrados nas respectivas posições X e Y.
*/
float verificaValorOperacao(float v[], int x, int y){
  	float soma = 0.0;
	
	for(int i = 0; i < 8; i++){
		if(x == i){
			soma = v[i];
		}
		if(y == i){
			soma += v[i];
		}
	}
	return soma;
}

int main(){
    float vet[8];
	int X, Y;
    float somaOperacao = 0.0;
	
    printf("Determine os valores\n");

	for(int i = 0; i < 8; i++){
		printf("Numero[%d]: ", i);
		scanf("%f", &vet[i]);
	}

	// Determina o indice do vetor.
	printf("\nInforme o valor dos indices X e Y\n");

	do{
		printf("X: ");
		scanf("%d", &X);
		printf("Y: ");
		scanf("%d", &Y);
	}while((X < 0 || X > 8) || (Y < 0 || Y > 8));

	somaOperacao = verificaValorOperacao(vet, X, Y);

	printf("\nSoma X + Y = %.1f", somaOperacao);

  return 0;
}