#include <stdio.h>
/*
Faça um programa que leia três números inteiros positivos e
efetue o cálculo de uma das seguintes médias de acordo com
um valor numérico digitado pelo usuário e mostrado na tabela
a seguir:
    1           Geométrica      X * Y * Z
    2           Ponderada       X + 2 * Y + 3 * Z / 6
    3           Harmonica       1 / 1/X + 1/Y + 1/z
    4           Aritmética      X + Y + Z / 3
*/
int verificaOperacao(int op, int *f, int x, int y, int z){
    int cal;

    if(op == 1){

        printf("\nGeometrica\n");
        cal = x * y * z;
        *f = 1;

    }else if(op == 2){

        printf("\nPonderada\n");
        cal = ((x + 2) * (y + 3) * z) / 6;
        *f = 1;

    }else if(op == 3){

        printf("\nHarmonica\n");
        cal = 3 / (1.0 / x + 1.0 / y + 1.0 / z);
        *f = 1;

    }else if(op == 4){

        printf("\nAritmetica\n");
        cal = (x + y + z) / 3;
        *f = 1;

    }else{
        printf("Operacao Incorreta!");
    }
    return cal;
}

int main(){
    int X, Y, Z;
    int operacao, finaliza = 0;
    
    printf("Determine valores inteiros para X, Y e Z\n");
    scanf("%d %d %d", &X, &Y, &Z);
    
    printf("\tOperacao desejada\n1 - Geometrica\n2 - Ponderada\n3 - Harmonica\n4 - Aritmetica\n");
    scanf("%d", &operacao);

    int resultado = verificaOperacao(operacao, &finaliza, X, Y, Z);

    if(finaliza != 0)
        printf("Media Calculada: %d", resultado);

    return 0;
}