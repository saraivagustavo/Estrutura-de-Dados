/*27. Implemente uma função em linguagem C chamada coeficiente_binomial que calcula o coeficiente
binomial. O programa deve receber dois números inteiros, n e k, fornecidos pelo usuário
e imprimir o coeficiente binomial correspondente.*/

#include <stdio.h>
int fatorial(int n){ //n! = n * (n - 1) * (n - 2) * ... * 1: Fórmula de fatorial para utilizar na fórmula de combinação
    if(n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int coeficiente_binomial(int n, int k){ // n! / (k! * (n - k)!): Fórmula de combinação para cálculo do coeficiente binomial
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main(){
    int n, k;
    printf("Digite dois números inteiros n e k: ");
    scanf("%d %d", &n, &k);
    printf("O coeficiente binomial de %d e %d é %d", n, k, coeficiente_binomial(n, k));
    return 0;
}