/*29. Escreva um programa em linguagem C que realize o seguinte:
(a) Leia um número inteiro do usuário.
(b) Declare um ponteiro que aponte para a variável inteira lida.
(c) Multiplique o valor da variável por 2, usando o ponteiro.
(d) Imprima o valor original e o valor resultante da multiplicação.

Exemplo de Execução
Digite um número inteiro: 7
Valor original: 7
Valor após multiplicação por 2: 14*/

#include <stdio.h>
int main(){
    int numero;
    int *ptr; //ponteiro para a variável numero
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Valor original: %d\n", numero);
    ptr = &numero; //ptr aponta para a variável numero
    *ptr *= 2; //multiplica o valor da variável por 2
    printf("Valor após multiplicação por 2: %d", *ptr);
    return 0;
}