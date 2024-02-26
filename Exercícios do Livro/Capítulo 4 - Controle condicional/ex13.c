#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que mostre ao usuário um menu com
quatro opções de operações matemáticas (as operações básicas,
por exemplo). O usuário escolhe uma das opções, e o seu
programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.
*/
void limpezaDoBuffer(){
    char clear;
    while((clear = getchar()) != '\n' && clear != EOF){}
}

float verificaOperacao(char operador, float X, float Y){
    float resul;

    if(operador == '*'){
        resul = X * Y;
    }else if(operador == '/'){
        resul = X / Y;
    }else if(operador == '+'){
        resul = X + Y;
    }else{
        resul = X - Y;
    }

    return resul;
}

int main(){
    char operador;
    float X, Y;

    printf("\t\t Escolha a Operacao desejada\n");
    printf("=============================================================\n\n");
    printf("\t\t  Multiplicacao\t\t(*)\n\t\t  Divisao\t\t(/)\n\t\t  Adicao\t\t(+)\n\t\t  Subtracao\t\t(-)\n");
    printf("\n=============================================================\n");

    do{
        printf("Operador: ");
        scanf("%c", &operador);
        limpezaDoBuffer();
    }while(operador != '*' && operador != '/' && operador != '+' && operador != '-');

    printf("\nDetermine os valores de X e Y\nX: ");
    scanf("%f", &X);
    printf("Y: ");
    scanf("%f", &Y);

    float resultadoOperacao = verificaOperacao(operador, X, Y);

    printf("\nResultado da operacao escolhida: %.1f", resultadoOperacao);

    return 0;
}