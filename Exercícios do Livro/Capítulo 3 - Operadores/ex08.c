#include <stdio.h>

/*
Leia um valor que represente uma temperatura em graus
Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a
temperatura em Fahrenheit e C a temperatura em Celsius.
*/

float convertendoTemperatura(float a){
    float c;

    c = a * (9.0 / 5.0) + 32.0;
    return c;
}

int main(){
    float celsius;

    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = convertendoTemperatura(celsius);

    printf("Conversao Celsius para Fahrenheit\nCelsius %.1f\nFahrenheit %.1f", celsius, fahrenheit);

    return 0;
}