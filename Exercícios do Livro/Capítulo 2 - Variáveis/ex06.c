#include <stdio.h>

/*
    Faça um programa que leia um valor do tipo
double e depois o imprima na forma de notação
científica.
*/

int main(){
    double num;

    scanf("%lf", &num);
    printf("%e", num);

    return 0;
}