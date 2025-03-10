/*62. Faça um programa que leia um caractere c, e, em seguida, n posições de um vetor de caracteres.
Seu programa deverá imprimir todos os índices em que forem encontrados c no vetor.
Exemplo de execução
Digite o caractere a ser procurado (c): a
Digite o tamanho do vetor (n): 9
Digite os caracteres do vetor (separados por espaço ou enter):
a
b
c
a
d
e
f
a
g
O caractere ’a’ foi encontrado nos seguintes índices:
0 3 7*/

#include <stdio.h>
int main(){
    char c;
    printf("Digite o caractere a ser procurado (c): ");
    scanf(" %c", &c);
    int n;
    printf("Digite o tamanho do vetor (n): ");
    scanf("%d", &n);
    char vetor[n];
    printf("Digite os caracteres do vetor (separados por espaço ou enter):\n");
    for(int i = 0; i < n; i++){
        scanf(" %c", &vetor[i]);
    }
    printf("O caractere '%c' foi encontrado nos seguintes índices:\n", c);
    for(int i = 0; i < n; i++){
        if(vetor[i] == c){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}