#include <stdio.h>
#include <stdlib.h>
/*
Usando a estrutura Retângulo do exercício anterior, faça um programa que
declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto
está ou não dentro do retângulo.        */

typedef struct{
    int X;
    int Y;
}Ponto;

typedef struct{
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
}Retangulo;

// Procedimento para atribuir as coordenadas ao tamanho do Retangulo.
void atribuiCoordenadasRetangulo(Retangulo *c){

    printf("Digite as coordenadas do canto superior esquerdo do retangulo (x y): ");
    scanf("%d %d", &c->superiorEsquerdo.X, &c->superiorEsquerdo.Y);
    printf("Digite as coordenadas do canto inferior direito do retangulo (x y): ");
    scanf("%d %d", &c->inferiorDireito.X, &c->inferiorDireito.Y);
}

// Procedimento para atribuir a coordenada ao meu ponto desejado.
void atribuiCoordenadasPonto(Ponto *c){

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%d %d", &c->X, &c->Y);
}

// Função responsável por calcular o ponto determinado.
int pontoDentroRetangulo(Ponto ponto, Retangulo retangulo){

    if(ponto.X >= retangulo.superiorEsquerdo.X && ponto.X <= retangulo.inferiorDireito.X &&
       ponto.Y >= retangulo.inferiorDireito.Y && ponto.Y <= retangulo.superiorEsquerdo.Y){
        return 1; // O ponto está dentro do retângulo
    }else{
        return 0; // O ponto está fora do retângulo
    }
}

int main() {
    // Declaração e leitura do retângulo
    Retangulo retangulo;
    Ponto coord;
    
    // Declaração e leitura do retangulo
    atribuiCoordenadasRetangulo(&retangulo);

    // Declaração e leitura do ponto
    atribuiCoordenadasPonto(&coord);

    // Verifica se o ponto está dentro do retângulo
    if (pontoDentroRetangulo(coord, retangulo)) {
        printf("O ponto esta dentro do retangulo.\n");
    } else {
        printf("O ponto esta fora do retangulo.\n");
    }

    return 0;
}