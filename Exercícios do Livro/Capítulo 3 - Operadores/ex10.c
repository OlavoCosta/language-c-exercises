#include <stdio.h>

/*
A importância de R$ 780.000,00 será dividida entre três
ganhadores de um concurso, sendo que:
    1. O primeiro ganhador receberá 46% do total.
    2. O segundo receberá 32% do total.
    3. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada
um dos ganhadores
*/

void verificaGanhador(float *ganhador, int premio){

    for(int i = 0; i < 3; i++){

        if(i == 0){ // Realizando Casting automáticamente através da conversão do tipo de operação. 100 para 100.0
            ganhador[i] = (premio / 100.0) * 46;
        }
        if(i == 1){
            ganhador[i] = (premio / 100.0) * 32;
        }
        if(i == 2){ 
            ganhador[i] = premio - (ganhador[0] + ganhador[1]);
        }
    }
}

int main(){
    const int premio = 780000;
    // Atribuindo um índice para o vetor, afim de, conseguir realizar a passagem por parametro ao chamar a função.
    int n = 3;
    float ganhador[n];

    // Chamada de função.
    verificaGanhador(ganhador, premio);

    for(int i = 0; i < 3; i++){
        printf("Ganhador %d: %.2f\n", i+1, ganhador[i]);
    }

    return 0;
}
