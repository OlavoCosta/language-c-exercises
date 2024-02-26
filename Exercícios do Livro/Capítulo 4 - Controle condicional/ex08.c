#include <stdio.h>
/*
Escreva um programa que, dada a idade de um nadador,
classifique-o em uma das seguintes categorias:
    Infantil A          5-7
    Infantil B          8-10
    Juvenil A           11-13
    Juvenil B           14-17
    Senior              Maiores de 18 anos
*/
void verificaClassificacao(int id){
    if(id >= 5 && id <= 7){
        printf("Atleta Infantil A");
    }else if(id >= 8 && id <= 10){
        printf("Atleta Infantil B");
    }else if(id >= 11 && id <= 13){
        printf("Atleta Juvenil A");
    }else if(id >= 14 && id <= 17){
        printf("Atleta Juvenil B");
    }else if(id >= 18){
        printf("Atleta Senior");
    }else{
        printf("Nao habilitado a competir!");
    }
}   

int main(){
    int idade = 0;

    printf("Qual a idade do atleta\nIdade: ");
    scanf("%d", &idade);

    verificaClassificacao(idade);

    return 0;
}