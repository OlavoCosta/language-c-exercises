#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. 
Cada ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y.
Faça um programa que declare e leia uma estrutura Retângulo e exiba a
área e o comprimento da diagonal e o perímetro desse retângulo.     */

// Estrutura responsável por receber os valores definidos pelo usuário.
typedef struct{
    int X;
    int Y;
}Ponto;

// Estrutura responsável por receber os valores, e exibir os resultados esperados do retângulo.
typedef struct{
    Ponto pontoSupEsq;
    Ponto pontoInfDir;
}Retangulo;

// Variáveis globais
Retangulo retang;
Ponto ponto[2];

// Função responsável por armazenar os pontos desejados pelo usuário.
Ponto recebePosicaoUsuario(int i){
    Ponto c;

    printf("\nInsira os valores desejados\nPonto superior esquerdo [X%d]: ", i + 1);
    scanf("%d", &c.X);
    printf("Ponto inferior direito [Y%d]: ", i + 1);
    scanf("%d", &c.Y);

    return c;
}

// Procedimento para atribuir as informações desejadas.
void realizaCalculosRetangulo(Ponto p[2]){
    int perimetro, area, compriDiagonal;

    // Calcula dimensões do retângulo
    Retangulo retang;
    retang.pontoSupEsq = p[0];  // Ponto superior esquerdo
    retang.pontoInfDir = p[1];  // Ponto inferior direito
    
    int largura = retang.pontoInfDir.X - retang.pontoSupEsq.X;
    int altura = retang.pontoInfDir.Y - retang.pontoSupEsq.Y;

    perimetro = 2 * (largura + altura);
    area = largura * altura;
    compriDiagonal = sqrt(pow(largura, 2) + pow(altura, 2));

    printf("\nArea = %d\nComprimento Diagonal = %d\nPerimetro do retangulo = %d\n", area, compriDiagonal, perimetro);
}

int main(){

    printf("\n\t\tCALCULANDO A AREA, COMPRIMENTO DA DIAGONAL E O PERIMETRO DO RETANGULO.\n\n");
    
    for(int i = 0; i < 2; i++){
        ponto[i] = recebePosicaoUsuario(i);
    }

    realizaCalculosRetangulo(ponto);

    return 0;
}