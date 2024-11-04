/*4. A prefeitura da Serra abriu uma linha de crédito para os funcionários estatutários. O valor
máximo da prestação não poderá ultrapassar 30% do salário bruto (salário mais benefícios sem
desconto de impostos). Faça um programa que leia o salário bruto de uma pessoa e imprima na
tela o valor máximo possível de prestação para este funcionário.*/

#include <stdio.h>
int main(){
    float salario, prestacao;
    printf("Digite o salário bruto:");
    scanf("%f", &salario);
    prestacao = salario * 0.3;
    printf("O valor máximo da prestação é: %.2f", prestacao);
    return 0;
}