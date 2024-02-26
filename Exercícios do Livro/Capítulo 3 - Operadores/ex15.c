#include <stdio.h>
/*
Faça um programa para ler um número inteiro positivo de três dígitos. 
Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. 
Exemplo:
Número lido = 123 Número gerado = 321
*/

int verificaNumeroGerado(int numero){
    int centena, dezena, unidade;

    // Realiza a separação da unidade, dezena e sentena.
    dezena = (numero % 100) / 10;
    unidade = numero % 10;
    centena = numero / 100;

    // uma variável específica recebe os valores multiplicados para retornar um único valor cheio.
    int numeroInvertido = unidade * 100 + dezena * 10 + centena;

    return numeroInvertido;
}

int main(){
    int numGerado;

    printf("Insira um numero de 3 digitos: ");
    do{

        scanf("%d", &numGerado);
        if(numGerado < 0 || numGerado > 999){
            printf("Invalido!\nInsira novamente: ");
        }

    }while(numGerado < 0 || numGerado > 999);

    // Chamada de função.
    int numInvertido = verificaNumeroGerado(numGerado);

    printf("Numero lido: %d\nNumero Gerado: %d", numGerado, numInvertido);

    return 0;
}