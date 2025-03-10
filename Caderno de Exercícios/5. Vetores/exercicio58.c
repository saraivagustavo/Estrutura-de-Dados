/*58. Implemente um programa que leia os elementos de um vetor de valores reais e mostre a soma e
a média dos seus valores na tela.
Exemplo de Execução
Digite o tamanho do vetor: 5
Preencha o vetor com 5 valores reais:
Valor 1: 10.5
Valor 2: 15.3
Valor 3: 7.2
Valor 4: 8.8
Valor 5: 12.1
Soma dos valores: 54.9
Média dos valores: 10.98*/

#include <stdio.h>
int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float vetor[n], soma = 0;
    for(int i = 0; i < n; i++){
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    printf("Soma dos valores: %.1f\n", soma);
    printf("Média dos valores: %.2f\n", soma / n);
    return 0;
}