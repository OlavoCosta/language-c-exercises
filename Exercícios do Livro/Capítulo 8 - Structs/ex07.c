#include <stdio.h>
#include <stdlib.h>
/*
Crie uma estrutura representando uma hora. 
Essa estrutura deve conter os campos hora, minuto e segundo.
Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.
*/

// Definindo uma estrutura para representar um horário
typedef struct{
    int hora, minuto, segundo;
}Horario;

// Função responsável por permitir que o usuário atribua um horário, com validação do horário
void usuarioAtribuiHorario(Horario *h){

	do{
		printf("Horario: ");
		scanf("%d %d %d", &h->hora, &h->minuto, &h->segundo);

        // Verifica se o horário está dentro dos limites aceitáveis
		if((h->hora < 0 || h->hora > 23) || (h->minuto < 0 || h->minuto > 59) || 
        (h->segundo < 0 || h->segundo > 59)){
			printf("Horario inserido erroneamente! informe novamente\n");
		}

	}while((h->hora < 0 || h->hora > 23) || (h->minuto < 0 || h->minuto > 59) || 
    (h->segundo < 0 || h->segundo > 59));
	
}

// Função para verificar e retornar o índice do maior horário em um vetor de Horario
int verificaMaiorHorario(Horario *h, int n){
    int maior = 0;

    for(int i = 1; i < n; i++){
        // Comparando horas, minutos e segundos para determinar o maior horário
        if(h[i].hora > h[maior].hora){
            maior = i;
        }else if(h[i].hora == h[maior].hora){
            if(h[i].minuto > h[maior].minuto){
                maior = i;
            }else if(h[i].minuto == h[maior].minuto){
                if(h[i].segundo > h[maior].segundo){
                    maior = i;
                }
            }
        }
    }
    return maior;
}

int main(){
	Horario horarios[5];
    int indiceMaiorHorario;
	
    printf("VERIFICA MAIOR HORARIO\n\nInsira respectivamente hora : minuto : segundo\n");
    // Permitindo que o usuário insira cinco horários
	for(int i = 0; i < 5; i++){
		usuarioAtribuiHorario(&horarios[i]);
	}
	
    // Verificando o maior horário e imprimindo
    if((indiceMaiorHorario = verificaMaiorHorario(horarios, 5)) == -1){
        printf("\nPossui horarios iguais!\n");
    }else{
        printf("\nMaior Horario: %d:%d:%d\n", horarios[indiceMaiorHorario].hora, 
        horarios[indiceMaiorHorario].minuto, horarios[indiceMaiorHorario].segundo);
    }

  return 0;
}