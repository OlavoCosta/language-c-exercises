#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  Usando a estrutura “atleta” do exercício anterior, escreva um programa
que leia os dados de cinco atletas e os exiba por ordem de idade, do mais
velho para o mais novo.     */

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

// Realiza a impressão dos dados obtidos
void imprimeDadosAtletas(){
    int n = 0;
    atleta *p = listaAtleta;

    // Conta o número de elementos na lista
    while(p != NULL){
        n++;    // Verifica a quantidade de dados inseridos
        p = p->prox;
    }

    // Cria um array temporário para armazenar os atletas
    atleta **tempArray = (atleta **)malloc(n * sizeof(atleta *));
    p = listaAtleta;

    // Preenche o array temporário
    for(int i = 0; i < n; i++){
        tempArray[i] = p;
        p = p->prox;
    }

    // Ordena o array temporário por idade (decrescente)
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(tempArray[j]->idade > tempArray[i]->idade){
                // Troca os ponteiros se necessário
                atleta *temp = tempArray[i];
                tempArray[i] = tempArray[j];
                tempArray[j] = temp;
            }
        }
    }

    // Imprime os dados ordenados
    for(int i = 0; i < n; i++){
        printf("\n\tNome: %s", tempArray[i]->nome);
        printf("\n\tEsporte: %s", tempArray[i]->esporte);
        printf("\n\tIdade: %d", tempArray[i]->idade);
        printf("\n\tAltura: %.2f\n", tempArray[i]->altura);
    }

    // Libera a memória alocada para o array temporário
    free(tempArray);
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
    imprimeDadosAtletas();

    return 0;
}