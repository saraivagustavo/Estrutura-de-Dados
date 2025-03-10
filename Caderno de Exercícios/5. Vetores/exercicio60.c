/*60. Leia um conjunto de valores reais armazenando-os em um vetor. O final da leitura deve ocorrer
quando um valor negativo for dado como entrada. Em seguida, calcule a média do vetor e
mostre-a na tela. Na linha seguinte, imprima todos elementos maiores que a média.
Exemplo de execução
Digite os valores reais (insira um valor negativo para encerrar):
5.5
7.2
4.8
-1
Média dos valores: 5.83
Valores maiores que a média:
7.2*/

#include <stdio.h>
int main(){
    float valor, soma = 0;
    int n = 0;
    printf("Digite os valores reais (insira um valor negativo para encerrar):\n");
    float vetor[100];
    while(1){
        scanf("%f", &valor);
        if(valor < 0){
            break;
        }
        vetor[n] = valor;
        soma += valor;
        n++;
    }
    float media = soma / n;
    printf("Média dos valores: %.2f\n", media);
    printf("Valores maiores que a média:\n");
    for(int i = 0; i < n; i++){
        if(vetor[i] > media){
            printf("%.2f\n", vetor[i]);
        }
    }
    return 0;
}