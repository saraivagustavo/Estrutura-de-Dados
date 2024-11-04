/*19. Crie um programa que receba um valor x e mostre o valor de f(x) definido a seguir:
f(x) =    1, se x ≤ 1
f(x) =    x, se 1 < x ≤ 2
f(x) =    x^2, se 2 < x ≤ 3
f(x) =    x^3, se x > 3*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float x, fx;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    if(x <= 1){
        fx = 1;
    } else if(x > 1 && x <= 2){
        fx = x;
    } else if(x > 2 && x <= 3){
        fx = pow(x, 2);
    } else {
        fx = pow(x, 3);
    }
    printf("O valor de f(x) é: %.2f", fx);
    return 0;
}