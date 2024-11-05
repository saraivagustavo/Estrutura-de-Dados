/**/

#include <stdio.h>
int main(){
    #define FIXO 200
    #define PREMIO 800
    float venda_bruta, comissao;
    printf("Digite o valor da venda bruta: ");
    scanf("%f", &venda_bruta);
    if (venda_bruta < 1000){
        comissao = venda_bruta * 0.09;
        printf("O salário do vendedor é: %.2f", comissao + FIXO);
    }
    else{
        comissao = venda_bruta * 0.09;
        printf("O salário do vendedor é: %.2f", comissao + FIXO + PREMIO);
    }
}