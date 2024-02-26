#include <stdio.h>
/*  Elabore um programa que leia dois números inteiros e exiba o
resultado das operações de “ou exclusivo”, “ou bit a bit” e “e
bit a bit” entre eles.      */
int main(){
    int num[2];

    for(int i = 0; i < 2; i++){
        printf("Digite o primeiro numero inteiro: ");
        scanf("%d", &num[i]);    
    }

    // Operação "ou exclusivo" (XOR)
    int ouExclusivo = num[0] ^ num[1];

    // Operação "ou bit a bit" (OR)
    int ouBitABit = num[0] | num[1];

    // Operação "e bit a bit" (AND)
    int eBitABit = num[0] & num[1];

    printf("Resultado do ou exclusivo: %d\nResultado do ou bit a bit: %d\nResultado do e bit a bit: %d\n", ouExclusivo, ouBitABit, eBitABit);

    return 0;
}