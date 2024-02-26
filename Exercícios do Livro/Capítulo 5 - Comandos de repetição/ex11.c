#include <stdio.h>
/*
Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/
void verificaDivisores(int n){
	printf("\nOs divisores do numero %d sao:\n", n);
	
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			printf("%d\n", i);
		}
	}
}

int main(){
    int numero;
	
    printf("Insira um numero inteiro para ver seus divisores\n");

	printf("Numero: ");
	do{
		scanf("%d", &numero);
		if(numero < 0){
			printf("Insira novamente: ");
		}
	}while(numero < 0);

    verificaDivisores(numero);
	
  return 0;
}