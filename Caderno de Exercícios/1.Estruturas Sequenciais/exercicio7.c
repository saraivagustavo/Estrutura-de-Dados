/*7. Faça um programa que leia dois valores inteiros armazenando-os em variáveis x e y. Ao final
da execução, os valores destas variáveis devem estar trocados. Restrição: você não deve utilizar
variável temporária, ou seja, apenas duas variáveis podem ser utilizadas.*/

#include <stdio.h>
int main(){
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("O valor de x trocado é: %d\n", x);
    printf("O valor de y trocado é: %d\n", y);
    return 0;
}