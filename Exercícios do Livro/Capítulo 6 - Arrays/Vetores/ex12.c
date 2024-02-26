#include <stdio.h>
/*
Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.
*/
int main(){
    int vet[10];
	int count = 0;
	
    printf("informe os numeros desejados\n");
	for(int i = 0; i < 10; i++){
		printf("numero: ");
		scanf("%d", &vet[i]);
	}

    while(count < 10){
		int aux = vet[count];
        
        for(int i = 1; i < 10; i++){	
            if(count != i && aux == vet[i]){
                printf("igual no indice[%d] numero: %d\n", i, vet[i]);
            }
        }
            count++;
	}
	
  return 0;
}