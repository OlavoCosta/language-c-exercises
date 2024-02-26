#include <stdio.h>
/*
Faça um programa para verificar se determinado número
inteiro lido é divisível por 3 ou 5, mas não simultaneamente
pelos dois.
*/

void verificaNumeroDivisivel(int n){
    if(n % 3 == 0 && n % 5 == 0){
        printf("Numero Invalido");
    }else if(n % 3 == 0){
        printf("Numero divisivel por 3");
    }else{
        printf("Numero divisivel por 5");
    }
}

int main(){
    int num;

    printf("Insira um numero inteiro\nNumero: ");
    scanf("%d", &num);

    verificaNumeroDivisivel(num);

    return 0;
}