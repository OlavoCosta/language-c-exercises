#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.
*/

typedef struct{
    int dia, mes, ano;
}DataNascimento;

typedef struct{
    char cidade[100];
    char rua[100];
    int cep;
    int numeroCasa;
}Endereco;

typedef struct{
    char nome[100];
    double cpf; 
    DataNascimento dataNas;
    Endereco ender;
}Cadastro;

// Realiza a limpeza do buffer de entrada
void limpaBuffer(){
	int clear;
	while((clear = getchar()) != '\n' && clear != EOF);
}

// Procedimento para efetuar cadastros.
Cadastro realizaCadastro() {
    Cadastro p;

    printf("\nNome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';  // Remove o caractere de nova linha
    printf("CPF: ");
    scanf("%lf", &p.cpf);
    printf("Data de Nascimento: ");
    scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    limpaBuffer();
    printf("Cidade: ");
    fgets(p.ender.cidade, sizeof(p.ender.cidade), stdin);
    p.ender.cidade[strcspn(p.ender.cidade, "\n")] = '\0';  // Remove o caractere de nova linha
    printf("Endereco: ");
    fgets(p.ender.rua, sizeof(p.ender.rua), stdin);
    p.ender.rua[strcspn(p.ender.rua, "\n")] = '\0';  // Remove o caractere de nova linha
    printf("CEP: ");
    scanf("%d", &p.ender.cep);
    printf("Numero residencia: ");
    scanf("%d", &p.ender.numeroCasa);

    return p;
}

// Realiza impressão.
void imprimeDadosPessoa(Cadastro p){

	printf("\n\n\tNome: %s\n", p.nome);
	printf("\tCPF: %.0lf\n", p.cpf);
	printf("\tData Nas: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
	printf("\tCidade: %s\n", p.ender.cidade);
	printf("\tEndereco: %s\n", p.ender.rua);
	printf("\tCEP: %d\n", p.ender.cep);
	printf("\tNumero: %d\n", p.ender.numeroCasa);
}

int main(){
    Cadastro pessoa;
        
    printf("\n\t\t\t\tFACA SEU CADASTRO\n\n");

    // Chamada para o procedimento.
    pessoa = realizaCadastro();
    imprimeDadosPessoa(pessoa);
	
    return 0;
}