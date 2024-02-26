#include <stdio.h>
/*
Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:
Apresente um programa que calcule o valor de qualquer Hn.

	hn = 1 + 1/2 + 1/3 +1/4 ... 1/n;
*/
int main(){
	float Hn = 0.0;
	int n;
	
  	printf("Determine o valor de N para calcular HN\nN: ");
	scanf("%d", &n);

	// soma harmonica
	for(int i = 1; i <= n; i++){
		Hn += 1.0 / i;
	}

  	printf("\nO numero harmonico H%d = %.4f", n, Hn);
	
  	return 0;
}