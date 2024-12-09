/*Implemente uma função com a seguinte assinatura:
int* lineariza(int **mat, int n);
A função deve receber como entrada uma matriz triangular inferior mat de dimensões n × n e retornar um vetor contendo os elementos da matriz que estão na diagonal principal e abaixo dela. O vetor deve ser alocado dinamicamente e retornado pela função.
Por exemplo, dada a matriz:
1  0  0
2  5  0
3  6 -2
O vetor linearizado deve ser:
1 2 5 3 6 -2
A alocação do vetor deve ter tamanho exato para armazenar os elementos necessários.
Implemente também um programa principal para testar a função.*/

#include <stdio.h>
#include <stdlib.h>
int *lineariza(int **mat, int n){
    int *vetor, i, j, k = 0;
    vetor = (int *)malloc(n * (n + 1) / 2 * sizeof(int)); //n * (n + 1) / 2 é a quantidade de elementos da matriz triangular inferior
    for(i = 0; i < n; i++){ //percorre as linhas da matriz
        for(j = 0; j <= i; j++){ //percorre as colunas da matriz
            vetor[k] = mat[i][j]; //atribui os elementos da matriz triangular inferior ao vetor
            k++;
        }
    }
    return vetor;
}

int main(){
    int n = 3, i, j, *vetor;
    int **mat = (int **)malloc(n * sizeof(int *));
    for(i = 0; i < n; i++){
        mat[i] = (int *)malloc(n * sizeof(int));
    }
    mat[0][0] = 1;
    mat[0][1] = 0;
    mat[0][2] = 0;
    mat[1][0] = 2;
    mat[1][1] = 5;
    mat[1][2] = 0;
    mat[2][0] = 3;
    mat[2][1] = 6;
    mat[2][2] = -2;
    vetor = lineariza(mat, n);
    for(i = 0; i < n * (n + 1) / 2; i++){ 
        printf("%d ", vetor[i]); //imprime o vetor linearizado
    }
    return 0;
}