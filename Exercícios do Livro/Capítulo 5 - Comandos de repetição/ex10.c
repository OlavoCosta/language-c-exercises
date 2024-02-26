#include <stdio.h>
/*
Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
*/
int main(){
	int numeros[10];
	int media = 0;
	
    printf("Determine 10 numeros inteiros\n");

    for(int i = 0; i < 10; i++){
		
		printf("Numero %d: ", i+1);
		do{
			scanf("%d", &numeros[i]);
			if(numeros[i] < 0){
				printf("Insira novamente: ");
			}
		}while(numeros[i] < 0);

		media += numeros[i];
	}

    media = media / 10;

	printf("\nMedia: %d", media);
	
  return 0;
}