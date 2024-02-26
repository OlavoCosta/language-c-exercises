#include <stdio.h>
/*
Escreva um programa que leia um número inteiro positivo N
e em seguida imprima N linhas do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 
16 17 18 19 20 21
*/
void imprimeTrianguloFloyd(int n){
    int count = 1;

    // laço de repetição aninhado para imprimir o triangulo de floyd.
    for(int i = 1; i <= n; i++){
        // Vai incrementar 1 a variável contador e vai encerrar o laço j, dando continuidade ao laço i, retornando ao laço j.
        for(int j = 1; j <= i; j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}

int main(){
	int N;

	printf("Determine um numero inteiro pra N\nN: ");

	do{
		scanf("%d", &N);
	}while(N <= 0);
	
    imprimeTrianguloFloyd(N);
	
  return 0;
}