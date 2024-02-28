#include <stdio.h>
#include <stdlib.h>
#define N 6
/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Agora, escreva um programa que leia os dados de seis pessoas. 
Calcule e exiba os nomes, da pessoa mais nova e da mais velha.
*/

// Estrutura contendo data de nascimento
typedef struct{
    int dia, mes, ano;
}DatNasc;

// Estrutura contendo dados de pessoas
typedef struct{
    char nome[100];
    DatNasc datNasc;
}Pessoa;

// Procedimento para realizar a limpeza do buffer de entrada.
void realizaLimpezaBuffer(){
	int clear;
	while((clear = getchar()) != '\n' && clear != EOF){}
}

// Função responsável por atribuir dados pessoais as pessoas
void recebeUsuarioDadosPessoas(Pessoa *p){

	printf("\nNOME: ");
	fgets(p->nome, 100, stdin);
	// Realiza a tratativa das datas inseridas
	do{
	  printf("Respectivamente dd mm aa\nData nasc.: ");
	  scanf("%d %d %d", &p->datNasc.dia, &p->datNasc.mes, &p->datNasc.ano);
	  realizaLimpezaBuffer();

    if((p->datNasc.dia < 1 || p->datNasc. dia > 31) || (p->datNasc.mes < 1 || 
    p->datNasc.mes > 12) || (p->datNasc.ano > 2024)){
			printf("\nData inserida erroneamente!\n");
		}
		
	}while((p->datNasc.dia < 1 || p->datNasc. dia > 31) || (p->datNasc.mes < 1 || 
    p->datNasc.mes > 12) || (p->datNasc.ano > 2024));
}

// Procedimento que irá determinar pessoa mais nova e pessoa mais velha
void verificaNascimentoPessoas(Pessoa *p, int n, int *menor, int *maior){
    
    for(int i = 1; i < n; i++){
        // Verifica o ano de nascimento das pessoas
        if(p[i].datNasc.ano < p[*maior].datNasc.ano){
            *maior = i;
        }else if(p[i].datNasc.ano > p[*menor].datNasc.ano){
            *menor = i;
        }else{
            // Se a condição anterior nem maior nem menor, verifica qual mês de nascimento
            if(p[i].datNasc.mes < p[*maior].datNasc.mes){
                *maior = i;
            }else if(p[i].datNasc.mes > p[*menor].datNasc.mes){
                *menor = i;
            }else{
                // Se as condições anteriores ainda não retornar a pessoa mais nova e mais velha, verifica o dia em que a pessoa nasceu.
                if(p[i].datNasc.dia < p[*maior].datNasc.dia){
                    *maior = i;
                }else if(p[i].datNasc.dia > p[*menor].datNasc.dia){
                    *menor = i;
                }
            }
        }
    }

    printf("\n\n PESSOA MAIS NOVA = %s DATA DE NASCIMENTO: %02d/%02d/%04d\nPESSOA MAIS VELHA = %s DATA DE NASCIMENTO: %02d/%02d/%04d\n\n", 
    p[*menor].nome, p[*menor].datNasc.dia, p[*menor].datNasc.mes, p[*menor].datNasc.ano, 
    p[*maior].nome, p[*maior].datNasc.dia, p[*maior].datNasc.mes, p[*maior].datNasc.ano);

}

int main(){
	Pessoa pessoa[N];
    int menor = 0;
    int maior = 1;
	
    printf("\n\tQUEM E A PESSOA MAIS NOVA E A MAIS VELHA?\n");
    // Chamada de função para obter do usuário os dados das pessoas.
	for(int i = 0; i < N; i++){
		recebeUsuarioDadosPessoas(&pessoa[i]);
	}

    // Chamada de função para definir quem é a pessoa mais nova e a pessoa mais velha.
    verificaNascimentoPessoas(pessoa, N, &menor, &maior);

	
  return 0;
}