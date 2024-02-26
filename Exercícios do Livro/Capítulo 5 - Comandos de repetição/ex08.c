#include <stdio.h>
/*
Faça um programa que leia 10 inteiros e imprima sua média.
*/
int main(){
  	int numeros[10];
	int soma = 0;
	float media;
	
  	printf("Determine numeros inteiros\n");
	
  	for(int i = 0; i < 10; i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &numeros[i]);
	 	soma += numeros[i];
	}
	
  	media = (float) soma / 10.0;

	printf("\nMedia: %.1f", media);
	
  return 0;
}