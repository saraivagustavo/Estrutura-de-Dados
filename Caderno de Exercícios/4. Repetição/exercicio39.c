/*39. Escreva um programa que calcule a média dos números digitados pelo usuário se eles forem pares.
Termine a leitura se o usuário digitar 0.*/

#include <stdio.h>
int main(){
    int numero, soma = 0, qtd = 0;
    float media;
    while(1){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero == 0){
            break;
        }
        if(numero % 2 == 0){
            soma += numero;
            qtd++;
        }
    }
    if(qtd > 0){
        media = (float)soma / qtd;
        printf("Media dos numeros pares: %.2f\n", media);
    }else{
        printf("Nenhum numero par foi digitado.\n");
    }
    return 0;
}