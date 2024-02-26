#include <stdio.h>
#include <unistd.h>
/*
Faça um programa que mostre uma contagem regressiva na
tela, iniciando em 10 e terminando em 0. Mostre uma
mensagem “FIM!” após a contagem;
*/
void contagemRegressiva(int c){
    for(int i = c; i > 0; i--){
        printf("%d\n", i);
        sleep(1);
    }
}

int main(){
    int contagem = 10;

    printf("Contagem regressiva...\n");

    contagemRegressiva(contagem);

    printf("\nFIM!");

    return 0;
}