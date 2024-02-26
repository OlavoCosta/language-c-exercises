#include <stdio.h>
#include <math.h>
/*
Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa
equação, lembrando que as raízes são calculadas como
    [x = -b +- V∆ / 2 * a]
em que [∆ = b 2 – 4 * a * c] e [ax² + bx + c = 0] representa uma equação do segundo grau. 
A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, 
imprima:
• Se ∆ < 0, não existe real. Imprima a
mensagem “Não existe raiz”.
• Se ∆ = 0, existe uma raiz real. Imprima a
raiz e a mensagem “Raiz única”.
• Se ∆ > 0, existem duas raízes reais.
Imprima as raízes.
*/

float calculaValorDelta(int a, int b, int c){
    float cal;
    cal = pow(b, 2) - 4 * a * c;
    return cal;
}

void verificaValorRaizes(int b, int valorDelta, int a){
    int x1, x2;

    x1 = (-b + sqrt(valorDelta)) / (2 * a);
    x2 = (-b - sqrt(valorDelta)) / (2 * a);

    printf("Raiz x1: %d\n", x1);
    printf("Raiz x2: %d\n", x2);
}

int main(){
    int a, b, c;
    float valorDelta;

    printf("Determine os valores dos coeficientes\nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    if(a == 0){
        printf("Nao e equacao de segundo grau");
    }else{
        valorDelta = calculaValorDelta(a, b, c);

        if(valorDelta < 0){
            printf("Nao existe raiz");
        }else if(valorDelta == 0){
            printf("Raiz unica");
        }else{
            verificaValorRaizes(b, valorDelta, a);
        }
    }
    
    return 0;
}