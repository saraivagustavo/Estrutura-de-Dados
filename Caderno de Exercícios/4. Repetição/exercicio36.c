/*36. Escreva um programa que leia n valores, um de cada vez, e conte quantos destes valores são
negativos, escrevendo esta informação na tela.*/

#include <stdio.h>
int main(){
    int n, num, cont;
    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num < 0)
            cont++;
    }
    printf("A quantidade de números negativos é %d\n", cont);
    return 0;
}