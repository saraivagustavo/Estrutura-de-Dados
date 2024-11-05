/*30. Escreva um programa em linguagem C que realize o seguinte:
(a) Declare uma variável inteira.
(b) Declare um ponteiro que aponte para a variável inteira.
(c) Utilize o operador sizeof para imprimir o tamanho do ponteiro.
(d) Utilize o operador sizeof para imprimir o tamanho da variável apontada pelo ponteiro.
Exemplo de Execução
Tamanho do ponteiro: 8 bytes
Tamanho da variável apontada: 4 bytes*/

#include <stdio.h>
int main(){
    int numero;
    int *ptr; //ponteiro para a variável numero
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Tamanho do ponteiro: %ld bytes\n", sizeof(ptr)); //tamanho do ponteiro é 8 bytes
    printf("Tamanho da variável apontada pelo ponteiro: %ld bytes", sizeof(numero)); //tamanho da variável é 4 bytes porque é um inteiro
    return 0;
}