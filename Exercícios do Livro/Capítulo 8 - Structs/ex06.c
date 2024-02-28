#include <stdio.h>
#include <stdlib.h>
/*  Crie uma estrutura representando um aluno de uma disciplina. 
Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. 
Agora, escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura. 
Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco. 
*/
typedef struct{
    int matricula;
    char nome[100];
    float prova[3];
    float mediaGeral;
}Aluno;

void realizaLimpezaBuffer(){
    int clear;
    while((clear = getchar()) != '\n' && clear != EOF){}
}

// Procedimento para atribuir notas aos alunos
void atribuiNotasAlunos(Aluno *alunos){

    printf("\n\tNumero da matricula: ");
    scanf("%d", &alunos->matricula);
    realizaLimpezaBuffer();
    printf("\tNome aluno: ");
    fgets(alunos->nome, 100, stdin);
    printf("\n\t\t\tPROVAS ENGENHARIA / ELETRONICA / COMPUTACAO\n");
    for(int i = 0; i < 3; i++){
        printf("\tNota[%d]: ", i + 1);
        scanf("%f", &alunos->prova[i]);
    }
}

// Função responsável por verificar maior média geral entre os alunos.
void verificaMaiorMediageral(Aluno *alunos){
    float maiorMedia = 0.0;
    int indiceMaiorMedia = 0;

    // Atribui média geral para cada aluno
    for(int i = 0; i < 5; i++){
        alunos[i].mediaGeral = 0.0;
        // Recebe média geral do aluno
        for(int j = 0; j < 3; j++){
            alunos[i].mediaGeral += alunos[i].prova[j];
        }
        alunos[i].mediaGeral /= 3.0;

        // Verifica aluno com a maior média. 
        if(alunos[i].mediaGeral > maiorMedia){
            maiorMedia = alunos[i].mediaGeral;
            indiceMaiorMedia = i;
        }
    }

    printf("\n\t\t\t\tALUNO COM MAIOR MEDIA\n\tMatricula: %d\n\tNome: %s", alunos[indiceMaiorMedia].matricula, alunos[indiceMaiorMedia].nome);
    printf("\n\tNotas: %.2f\n\tNotas: %.2f\n\tNotas: %.2f", alunos[indiceMaiorMedia].prova[0], alunos[indiceMaiorMedia].prova[1], alunos[indiceMaiorMedia].prova[2]);
    printf("\n\n\tMedia Geral: %.2f", alunos[indiceMaiorMedia].mediaGeral);

}

int main(){
    Aluno alunos[5];

    printf("\n\n\t\t\t\tNOTAS DOS ALUNOS DE MESTRADO - (PG/EEC)\n");

    for(int i = 0; i < 5; i++){
        atribuiNotasAlunos(&alunos[i]);
    }

    // Verifica aluno com maior média geral.
    verificaMaiorMediageral(alunos);

    return 0;
}