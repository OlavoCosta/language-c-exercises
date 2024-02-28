#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0).
*/

// Estrutura Coordenadas definida para armazenar valor de X e Y.
typedef struct{
    int X;
    int Y;
}Coordenadas;

// Função do tipo struct Coordenadas obtendo valores de X e Y.
Coordenadas usuarioDeterminaCoordenada(){
    Coordenadas c;

    printf("\nDetermine a coordenada\nEixo X: ");
    scanf("%d", &c.X);
    printf("Eixo Y: ");
    scanf("%d", &c.Y);

    return c;
}

// Verifica a distancia do ponto de partida (0,0) e o ponto determinado (X,Y)
void verificaDistanciaPosicao(Coordenadas coord){
    // Formula d = √(X - 0)² + (Y - 0)²

    int resul = sqrt(pow(coord.X, 2) + pow(coord.Y, 2));

    printf("\nA distancia entre (0,0) e (%d,%d) e: %d unidades!\n\n", coord.X, coord.Y, resul);
}

int main(){
    Coordenadas coord;

    printf("\n\t\t\tCOORDENADAS NO PLANO CARTESIANO\n");
    coord = usuarioDeterminaCoordenada();
    verificaDistanciaPosicao(coord);

    return 0;
}