#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  Crie uma estrutura representando um atleta. 
Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura.
Agora, escreva um programa que leia os dados de cinco atletas. 
Calcule e exiba os nomes do atleta mais alto e do mais velho.   */

// Declaração antecipada da struct Atleta
struct Atleta;

// Tipo struct definida para armazenar dados de um atleta
typedef struct Atleta{
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
    struct Atleta *prox;
}atleta;

atleta *listaAtleta = NULL; // Variável especial(ponteiro), no momento ela é NULL

void realizalimpezaDoBuffer(){
    char clear;
    while((clear = getchar()) != '\n' && clear != EOF){}
}

// Procedimento responsável por obter as informações dos atletas
void coletaDadosAtletas(){
    atleta *p = (atleta*)malloc(sizeof(atleta));

    realizalimpezaDoBuffer();
    printf("\nNome: ");
    fgets(p->nome, sizeof(p->nome), stdin);
    // Remove o caractere de nova linha ('\n') da string nome
    p->nome[strcspn(p->nome, "\n")] = '\0';

    printf("Esporte: ");
    fgets(p->esporte, sizeof(p->esporte), stdin);
    // Remove o caractere de nova linha ('\n') da string nome
    p->esporte[strcspn(p->esporte, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &p->idade); // Armazenar idade como dado não é recomendável
    printf("Altura: ");
    scanf("%f", &p->altura);

    p->prox = listaAtleta;
    listaAtleta = p;
}

// Realiza a impressão dos dados obtidos recursivamente
void imprimeDadosAtletas(atleta *auxLista){

    if(auxLista != NULL){
        printf("\n\tNome: %s", auxLista->nome);
        printf("\n\tEsporte: %s", auxLista->esporte);
        printf("\n\tIdade: %d", auxLista->idade);
        printf("\n\tAltura: %.2f\n", auxLista->altura);

        imprimeDadosAtletas(auxLista->prox); // Passa apontar para a próxima lista
    }
}

int main(){
    int N;

    printf("\tREALIZA A COLETA DE DADOS PESSOAIS DOS ATLETAS\n\n");

    printf("Quantidade de atletas a ser registrados: ");
    scanf("%d", &N);
        
    for(int i = 1; i <= N; i++){
        coletaDadosAtletas();
    }

    printf("\nDados dos atletas:\n");
    // Utiliza o ponteiro p apontando para o início da listaAtleta
    atleta *auxLista = listaAtleta;
    imprimeDadosAtletas(auxLista);

    return 0;
}