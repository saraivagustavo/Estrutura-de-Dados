/*5. Faça um programa para calcular as raízes reais de uma equação do 2º grau (ax2+bx+c) dado que
seus coeficientes são informados pelo usuário. Utilize uma variável real delta para armazenar o
resultado de b2 − 4ac.*/

#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("O valor de x1 é: %.2f\n", x1);
    printf("O valor de x2 é: %.2f\n", x2); 
    return 0;
}