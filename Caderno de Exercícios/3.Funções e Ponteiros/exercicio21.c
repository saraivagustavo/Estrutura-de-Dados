/*21. Escreva um programa em linguagem C que utilize uma função chamada quadrado para calcular
o quadrado de um número inteiro. A função quadrado deve receber um argumento inteiro x e
retornar o valor do quadrado de x. O programa principal deve ler um número inteiro fornecido
via teclado, chamar a função quadrado para calcular o quadrado e imprimir o resultado.*/

#include <stdio.h>
int f_quadrado(int x){
    return x * x;
}

int main(){
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("O quadrado de %d é %d", x, f_quadrado(x));
    return 0;
}