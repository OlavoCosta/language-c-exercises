#include <stdio.h>
/*
Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. 
Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. 
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/
int main(){
	float numeros[10];
    int count = 0;
    int i = 0;
	
    // Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. 
    printf("Determine valores para o vetor\n");
    do{
        printf("Numero: ");
		scanf("%f", &numeros[count]);

        // Verificar se o número já foi digitado
        int repetido = 0;

        for(int j = 0; j < count; j++){
            // verifica se o numero digitado é igual ao anterior, se sim, a variável repitido recebe o valor 1, indo para condicional que não realiza o incremento.
            if(numeros[count] == numeros[j]){
                repetido = 1;
                break;
            }
        }

        if(repetido == 1){
            printf("Numero invalido, insira novamente\n");
        // se variável repitido igual a 0, as variáveis count e i recebem o incremento de 1, mudando as condições do sistema.
        }else{
            count++;
            i++;
        }

    }while(i < 10);

    for(i = 0; i < 10; i++){
        printf("\nVetor[%d]: %.2f", i, numeros[i]);
    }
	
  return 0;
}