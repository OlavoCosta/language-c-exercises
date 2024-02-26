#include <stdio.h>
/*
	Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante.
*/

void verificaDiaSemana(int num){
    if(num == 1){
        printf("Domingo");
    }else if(num == 2){
        printf("Segunda-feira");
    }else if(num == 3){
        printf("Terca-feira");
    }else if(num == 4){
        printf("Quarta-feira");
    }else if(num == 5){
        printf("Quinta-feira");
    }else if(num == 6){
        printf("Sexta-feira");
    }else{
        printf("Sabado");
    }
}

int main(){
    int num;

    printf("Informe um numero inteiro do 1 ao 7\n");
    do{
        printf("Dia: ");
        scanf("%d", &num);
    }while(num < 1 || num > 7);

    verificaDiaSemana(num);

    return 0;
}