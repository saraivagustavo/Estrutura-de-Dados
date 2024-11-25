/*37. Faça um programa que calcule a média aritmética de vários valores inteiros positivos, inseridos
pelo usuário. O final da leitura acontecerá quando for lido um valor negativo.*/

#include <stdio.h>
int main(){
    int num, cont = 0, soma = 0;
    float media;
    printf("Digite um número: ");
    scanf("%d", &num);
    while(num >= 0){
        cont++;
        soma += num;
        printf("Digite um número: ");
        scanf("%d", &num);
    }
    media = soma / cont;
    printf("A média aritmética dos valores lidos é %.2f\n", media);
    return 0;
}