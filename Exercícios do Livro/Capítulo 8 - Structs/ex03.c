#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles. */

typedef struct{
    int X;
    int Y;
}Coordenadas;

// Variáveis globais
Coordenadas pontos[2];

// Função para receber do usuário as coordenadas desejadas.
Coordenadas recebeCoordenadasUsuario(){
    Coordenadas c;

    printf("Eixo X: ");
    scanf("%d", &c.X);
    printf("Eixo Y: ");
    scanf("%d", &c.Y);

    return c;
}

// Procedimento que verifica a distancia entre os pontos.
void verificaDistanciaEntrePontos(Coordenadas p[2]){
    
    int dist = sqrt(pow(p[1].X - p[0].X, 2) + pow(p[1].Y - p[0].Y, 2));

    printf("\nA distancia entre os pontos(%d,%d) e (%d,%d) e: %d unidades!\n\n", p[0].X, p[0].Y, p[1].X, p[1].Y, dist);
}

int main(){

    printf("\n\t\tCOORDENADAS NO PLANO CARTESIANO\n");

    for(int i = 0; i < 2; i++){
        printf("\nInsira a %d coordenada desejada\n", i+1);
        pontos[i] = recebeCoordenadasUsuario();
    }

    verificaDistanciaEntrePontos(pontos);

    return 0;
}