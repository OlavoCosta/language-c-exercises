#include <stdio.h>
/*
Faça um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. 
Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
*/

void verificaEmprestimo(float salarioFuncionario, float valorPrestacao){
    salarioFuncionario = salarioFuncionario * 0.20;

    if(valorPrestacao > salarioFuncionario){
        printf("Emprestimo nao concedido!");
    }else{
        printf("Emprestimo concedido!");
    }
}

int main(){
    float salarioFuncionario, valorPrestacao;

    printf("Qual valor do salario?\nR$");
    scanf("%f", &salarioFuncionario);
    printf("Valor da prestacao desejado\nR$");
    scanf("%f", &valorPrestacao);

    verificaEmprestimo(salarioFuncionario, valorPrestacao);

    return 0;
}