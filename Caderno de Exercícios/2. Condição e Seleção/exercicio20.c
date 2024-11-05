/*20. Faça um programa para calcular as raízes reais de uma equação do 2º grau (ax^2+bx+c) dado que
seus coeficientes são informados pelo usuário. Utilize uma variável real delta para armazenar o
resultado de b2 − 4ac. Informe o usuário se a equação tem 2, 1 ou nenhuma raiz real.*/

#include <stdio.h>  
#include <math.h>
#include <stdlib.h>
int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação tem duas raízes reais: %.2f e %.2f", x1, x2);
    } else if(delta == 0){
        x1 = -b / (2 * a);
        printf("A equação tem uma raiz real: %.2f", x1);
    } else {
        printf("A equação não tem raízes reais.");
    }
    return 0;
}