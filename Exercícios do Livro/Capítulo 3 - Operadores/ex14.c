#include <stdio.h>
#include <ctype.h>

/*
Faça um programa que converta uma letra maiúscula em
letra minúscula. Use a tabela ASCII para isso
*/

int main(){
    char letra;
    
    printf("Insira uma letra: ");
    scanf("%c", &letra);
    
/* 
    Sem utilizar a biblioteca ctype.h

    letra = (int) letra - 32;
*/
    // Usando função toupper da biblioteca ctype.h
    printf("Letra convertida em: %c", toupper(letra));

    return 0;
}