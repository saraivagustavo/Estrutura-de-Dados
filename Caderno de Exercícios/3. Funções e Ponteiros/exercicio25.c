/*25. Implemente um programa em linguagem C que calcule o máximo divisor comum (MDC) de dois
números inteiros positivos lidos do teclado utilizando a fórmula recursiva a seguir:
MDC(x, y) = (y, se x mod y = 0,
            MDC(y, x mod y), caso contrário.
O MDC deve ser calculado por uma função recursiva.*/

#include <stdio.h>
int mdc(int x, int y){
    if(x % y == 0)
        return y;
    else
        return mdc(y, x % y);
}

int main(){
    int x, y;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &x, &y);
    printf("O MDC de %d e %d é %d", x, y, mdc(x, y));
    return 0;
}