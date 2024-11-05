/*26. O máximo divisor comum de três números inteiros positivos, MDC(x, y, z), pode ser calculado
como MDC(MDC(x, y), z). Escreva um programa que leia três números inteiros fornecidos via
teclado e imprima o MDC deles, usando a função MDC apresentada no texto.*/

#include <stdio.h>
int mdc(int x, int y){
    if(x % y == 0)
        return y;
    else
        return mdc(y, x % y);
}

int mdc3(int x, int y, int z){
    return mdc(mdc(x, y), z);
}

int main(){
    int x, y, z;
    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("O MDC de %d, %d e %d é %d", x, y, z, mdc3(x, y, z));
    return 0;
}
