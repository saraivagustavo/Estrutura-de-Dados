/*16. Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O
algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total
usando a seguinte tabela:
Código    Preço unitário (R$)
 1001          5,32
 1324          6,45
 6548          2,37
 987           5,32
 7623          6,45
Obs.: Mostrar a mensagem “Código inválido” caso o valor digitado não esteja de acordo com a
tabela.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int codigo, quantidade;
    float preco_unitario, preco_total;
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    if(codigo == 1001){
        preco_unitario = 5.32;
    } else if(codigo == 1324){
        preco_unitario = 6.45;
    } else if(codigo == 6548){
        preco_unitario = 2.37;
    } else if(codigo == 987){
        preco_unitario = 5.32;
    } else if(codigo == 7623){
        preco_unitario = 6.45;
    } else {
        printf("Código inválido");
        exit(0);
    }   
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    preco_total = preco_unitario * quantidade;
    printf("O preço total devido é: R$ %.2f", preco_total);
    return 0;
}