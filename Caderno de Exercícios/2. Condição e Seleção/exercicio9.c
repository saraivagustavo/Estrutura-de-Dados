/*9. Faça um programa que leia um número inteiro maior que zero e informe se é par ou ímpar*/

#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &numero);
    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("O número %d é par.", numero);
        } else {
            printf("O número %d é ímpar.", numero);
        }
    } else {
        printf("Número inválido.");
    }
    return 0;
}