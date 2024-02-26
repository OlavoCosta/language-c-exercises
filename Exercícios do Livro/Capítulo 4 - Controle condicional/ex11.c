#include <stdio.h>
/*
Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = Abril.
*/

void verificaMes(int num){
	if(num == 1){
		printf("Janeiro");
	}else if(num == 2){
		printf("Fevereiro");
	}else if(num == 3){
		printf("Marco");
	}else if(num == 4){
		printf("Abril");
	}else if(num == 5){
		printf("Maio");
	}else if(num == 6){
		printf("Junho");
	}else if(num == 7){
		printf("Julho");
	}else if(num == 8){
		printf("Agosto");
	}else if(num == 9){
		printf("Setembro");
	}else if(num == 10){
		printf("Outubro");
	}else if(num == 11){
		printf("Novembro");
	}else{
		printf("Dezembro");
	}
}

int main(){
  	int num;

	printf("Informe um numero inteiro do 1 ao 12\n");
	do{
		printf("Mes: ");
		scanf("%d", &num);
	}while(num < 1 || num > 12);

	verificaMes(num);
	
  return 0;
}