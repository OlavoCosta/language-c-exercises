#include <stdio.h>
#include <math.h>

/*
Leia o valor do raio de um círculo.
Calcule e imprima a área do círculo correspondente. 
A área do círculo é A = π* raio 2, sendo π = 3.141592.
*/

int main(){
    float raio, area, PI = 3.141592;

    printf("Valor do Raio: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);
    
    printf("Area do circulo: %.2f", area);

    return 0;
}