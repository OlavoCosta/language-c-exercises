#include <stdio.h>
#include <ctype.h>
/*
Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7
*/

// Limpeza de buffer
void limpaEntradaDeDado(){
    int clear;
    while((clear = getchar()) != '\n' && clear != EOF){}
}

// Estrutura de função para verificar o peso ideal do usuário.
void verificaPesoIdeal(float h, char *s){
    float pesoIdeal;

    if(toupper(*s) == 'M'){
        pesoIdeal = (72.7 * h) - 58;
        printf("Peso ideal para Homens: %2.f", pesoIdeal);
    }else if(toupper(*s) == 'F'){
        pesoIdeal = (62.1 * h) - 44.7;
        printf("Peso ideal para Mulheres: %.2f", pesoIdeal);
    }else{
        printf("Sexo informado incorreto!");
    }
}

int main(){
    char sexo[1];
    float altura;

    printf("Determine sua altura e sexo\nAltura: ");
    scanf("%f", &altura);

    printf("Sexo: ");
    // Necessário realizar a limpeza do buffer de entrada para que não ocorra algum bug ou até mesmo a finalização do programa.
    limpaEntradaDeDado();
    scanf("%c", sexo);

    verificaPesoIdeal(altura, sexo);

    return 0;
}