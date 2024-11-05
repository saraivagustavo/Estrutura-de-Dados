/*23. Uma empresa deseja calcular o bônus salarial de seus funcionários com base no número de anos
de trabalho e no salário atual. A regra para calcular o bônus é a seguinte:
    • Se o funcionário tiver mais de 5 anos de trabalho na empresa e o salário atual for superior
    a R$5000,00, o bônus será de 10% do salário.
    • Caso contrário, o bônus será de 5% do salário.
Implemente uma função em linguagem C com assinatura float calcular_bonus(int anos_trabalhados,
→ , float salario) para realizar esse cálculo. Escreva um programa que capture o número
de anos de trabalho e o salário atual fornecidos via teclado, chame a função calcular_bonus
para calcular o bônus e imprima o valor do bônus calculado.*/

#include <stdio.h>
float calcular_bonus(int anos_trabalhados, float salario){
    if(anos_trabalhados > 5 && salario > 5000)
        return salario * 1.1;
    else
        return  salario * 1.05;
}

float main(){
    int anos_trabalhados;
    float salario;
    printf("Digite o número de anos trabalhados e o salário: ");
    scanf("%d %f", &anos_trabalhados, &salario);
    printf("O salário com bônus é R$%.2f", calcular_bonus(anos_trabalhados, salario));
    return 0;
}