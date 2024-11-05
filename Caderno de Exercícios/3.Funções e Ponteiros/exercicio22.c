/*22. Implemente a função maior3 que recebe três inteiros e retorna o maior valor dentre eles. A
função deve se apoiar, estritamente, na função maior2, ou seja, não pode utilizar o comando if
ou while.
Exemplo de entrada: 10 11 4
Saída esperada: 11*/

#include <stdio.h>
int maior2(int a, int b){
    if(a >=  b)
        return a;
    else
        return b;
}

int maior3(int a, int b, int c){
    return maior2(maior2(a, b), c);
}

int main(){
    int a, b, c;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("O maior número é %d", maior3(a, b, c));
    return 0;
}