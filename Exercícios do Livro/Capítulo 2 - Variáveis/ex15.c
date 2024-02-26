#include <stdio.h>

/*
Escreva um programa que leia três variáveis:
char, int e float. Em seguida, imprima-as de três
maneiras diferentes: separadas por espaços, por
uma tabulação horizontal e uma em cada linha.
Use um único comando printf() para cada
operação de escrita das três variáveis.
*/

int main(){
    char letra;
    int numInteiro;
    float numFlutuante;

    printf("Letra: ");
    scanf("%c", &letra);
    printf("Inteiro: ");
    scanf("%d", &numInteiro);
    printf("Flutuante: ");
    scanf("%f", &numFlutuante);

    printf("\n%c %d %.2f\n\n%c\t%d\t%.2f\n\n%c\n%d\n%.2f", letra, numInteiro, numFlutuante, letra, numInteiro, numFlutuante, letra, numInteiro, numFlutuante);

    return 0;
}