#include <stdio.h>
#include <stdlib.h>
/*  Escreva um programa que contenha uma estrutura representando uma
data válida. Essa estrutura deve conter os campos dia, mês e ano. Em
seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o
número de dias que decorreram entre as duas datas.      */

// Struct responsável por receber a data determinada
typedef struct Data{
    int dia, mes, ano;
    struct Data *prox;  // Ponteiro para percorrer as structs
}data;

data *listaEstrutura = NULL;

// Recebe datas e verifica se as datas inseridas estão corretas.
void recebeDiaMesAnoUsuario(data *p){
    do{
        printf("Dia: ");
        scanf("%d", &p->dia);

        if(p->dia < 1 || p->dia > 31)
            printf("Dia invalido!\n");

    }while(p->dia <= 0 || p->dia > 31);

    do{
        printf("Mes: ");
        scanf("%d", &p->mes);

        if(p->mes < 1 || p->mes > 12)
            printf("Mes invalido!\n");

    }while(p->mes < 1 || p->mes > 12);

    do{
        printf("Ano: ");
        scanf("%d", &p->ano);

        if(p->ano < 1)
            printf("Ano invalido!\n");

    }while(p->ano < 1);
}

// Realiza a inserção dos dados nas structs através de alocação dinâmica
void efetuaAlocacao(int N){
    for(int i = 0; i < N; ++i){
        data *p = (data *)malloc(sizeof(data));
        printf("\nInsira a data desejada\n");
        // Chamada de função para obter as datas
        recebeDiaMesAnoUsuario(p);

        p->prox = NULL; // Atribui NULL ao prox da struct

        // Verifica se a listaEstrutura possui um primeiro elemento
        if(listaEstrutura == NULL){
            listaEstrutura = p;
        }else{
            // Variavel auxiliar para nao perder endereço 
            data *percorreLista = listaEstrutura;

            while(percorreLista->prox != NULL){
                percorreLista = percorreLista->prox;
            }
            percorreLista->prox = p;
        }
    }
}

// Realiza calculo da diferença de dias
int calculaDiferencaDias(){
    data *data1 = listaEstrutura;
    data *data2 = listaEstrutura->prox;

    int difDias = 0;

    // Calcula a diferença nos anos
    int anos = data2->ano - data1->ano;

    if(anos > 0)
        difDias += anos * 365;
    else
        difDias += anos * (-365);

    // Adiciona os dias bissextos
    for(int ano = data1->ano; ano < data2->ano; ano++){
        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
            difDias++;
        }
    }

    // Calcula a diferença nos meses
    int meses = data2->mes - data1->mes;

    if(meses > 0)
        difDias += (meses * 31);
    else
        difDias += (meses * (-31));

    // Adiciona a diferença nos dias
    int dias = data2->dia - data1->dia;

    if(dias > 0)
        difDias += dias;
    else
        difDias += (dias * (-1));

    return difDias;
}

int main(){
    int N = 2;
    int difDias = 0;

    printf("\t\tDetermine as datas a serem calculadas\n");
    efetuaAlocacao(N);

    if((difDias = calculaDiferencaDias()) != 0){
        printf("\nA diferenca de idade e: %d dias!\n", difDias);
    }

    // Libera a memória alocada
    while(listaEstrutura != NULL){
        data *temp = listaEstrutura;
        listaEstrutura = listaEstrutura->prox;
        free(temp);
    }

    return 0;
}