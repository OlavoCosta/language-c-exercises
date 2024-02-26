#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char categoria[100];
    char marca[50];
    char modelo[25];
    char eficienciaEnergia;
    char descricao[500];
    int quantidade;
    int codigo;
}Eletronico;

// Procedimento (não retorna nada) para imprimir o eletronico.
void imprimirEletronico(Eletronico e){
    printf("\t\nTipo: %s", e.categoria);
    printf("\tMarca: %s", e.marca);
    printf("\tModelo: %s", e.modelo);
    printf("\tEficiencia energetica: %c\tQuantidade: %d\n", e.eficienciaEnergia, e.quantidade);
    printf("\tDescricao: %s", e.descricao);
    printf("\tCodigo: %d", e.codigo);
}

void limpaBuffer(){
    char clear;
    while((clear = getchar()) != '\n' && clear != EOF){}
}

// Função que le os dados de um eletronico.
Eletronico lerEletronico(){
    Eletronico e;

    printf("\nDigite a Categoria do produto: ");
    fgets(e.categoria, 100, stdin);
    printf("marca: ");
    fgets(e.marca, 50, stdin);
    printf("Modelo: ");
    fgets(e.modelo, 25, stdin);
    printf("Eficiencia energetica: ");
    scanf("%c", &e.eficienciaEnergia);
    // Limpa o buffer do teclado.
    limpaBuffer();
    printf("Descricao: ");
    fgets(e.descricao, 500, stdin);
    printf("Quantidade e codigo: ");
    scanf("%d%d", &e.quantidade, &e.codigo);

    return e;
}

int main(){
    
    Eletronico eletronico;

    eletronico = lerEletronico();
    imprimirEletronico(eletronico);

    return 0;
}