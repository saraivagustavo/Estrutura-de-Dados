/*34. Elabore um programa que leia um número de entrada (n) que indicará a quantidade de números
a serem lidos. Em seguida, leia n números (conforme o valor informado anteriormente) e imprima
o triplo de cada um.*/

#include <stdio.h>
int main(){
    int n, i, num;
    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%d", &num);
        printf("O triplo de %d é %d\n", num, num*3);
    }
    return 0;
}