 #include <stdio.h>
/*
Faça um programa que leia a altura e o peso de uma pessoa.
De acordo com a tabela a seguir, verifique e mostre qual a
classificação dessa pessoa.
        ALTURA                         PESO
                        ate 60     entre 60-90      acima de 90
    menor do que 1,20     A             D                G
        1,20 - 1,70       B             E                H
    Maior do que 1,70     C             F                I
*/
void verificaClassDoGrupo(float h, float p){
    char grupo[3][3] = {{'A','D','G'}, {'B','E','H'}, {'C','F','I'}};

    if(h < 1.20){
        if(p < 60){
            printf("Classificacao: %c", grupo[0][0]);
        }else if(p < 90){
            printf("Classificacao: %c", grupo[0][1]);
        }else{
            printf("Classificacao: %c", grupo[0][2]);
        }
    }else if(h < 1.70){
        if(p < 60){
            printf("Classificacao: %c", grupo[1][0]);
        }else if(p < 90){
            printf("Classificacao: %c", grupo[1][1]);
        }else{
            printf("Classificacao: %c", grupo[1][2]);
        }
    }else{
        if(p < 60){
            printf("Classificacao: %c", grupo[2][0]);
        }else if(p < 90){
            printf("Classificacao: %c", grupo[2][1]);
        }else{
            printf("Classificacao: %c", grupo[2][2]);
        }
    }
}

 int main(){
    float altura, peso;

    printf("Determine sua altura e peso\nAltura: ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);

    verificaClassDoGrupo(altura, peso);

    return 0;
 }