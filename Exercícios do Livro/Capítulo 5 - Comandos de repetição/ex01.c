#include <stdio.h>
/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.
*/
int main(){
  	int N;

	printf("Insira um numero inteiro: ");
	do{
		scanf("%d", &N);
	}while(N < 0);

  	for(int i = 0; i < N; i++){
		printf("%d ", i);
	}
	
	return 0;
}