/*10. A prefeitura da Serra abriu uma linha de crédito para os funcionários estatutários. O valor
máximo da prestação não poderá ultrapassar 30% do salário bruto. Faça um programa que leia
o salário bruto e o valor da prestação, e informe se o empréstimo pode ou não ser concedido.*/

#include <stdio.h>
int main(){
    float salario, prestacao;
    printf("Digite o salário bruto:");
    scanf("%f", &salario);
    printf("Digite o valor da prestação:");
    scanf("%f", &prestacao);
    if (prestacao <= salario * 0.3) {
        printf("Empréstimo concedido.");
    } else {
        printf("Empréstimo negado.");
    }
    return 0;
}