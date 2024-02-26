#include <stdio.h>
/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/
void realizaSomaDivisoes(int num){
	int soma = 0;
	
	for(int i = 1; i < num; i++){
		if(num % i == 0){
			printf("%d\n", i);
			soma += i;
		}
	}

	printf("\nSoma = %d", soma);
}

int main(){
    int numero;
    
    printf("Determine um numero inteiro e veja seus divisores e a soma desses divisores\n");

	printf("Numero: ");
	do{
		scanf("%d", &numero);
		if(numero < 0){
			printf("Insira novamente: ");
		}
	}while(numero < 0);

	realizaSomaDivisoes(numero);
	
  return 0;
}