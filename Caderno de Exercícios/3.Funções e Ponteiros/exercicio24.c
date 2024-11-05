/*24. Uma universidade deseja converter notas de seus estudantes de uma escala alfabética para uma
escala numérica de acordo com a seguinte correspondência:
Nota   Valor Numérico
 A         10
 B         8
 C         6
 D         4
 F         0
Implemente uma função em linguagem C com assinatura int converter_nota(char nota) que
recebe uma nota alfabética como argumento e retorna a nota equivalente na escala numérica.
Caso a nota alfabética seja inválida, a função deve retornar -1. Escreva um programa completo
que leia uma nota alfabética fornecida via teclado, chame a função converter_nota para realizar
a conversão e imprima a nota equivalente na escala numérica ou uma mensagem de erro caso a
nota seja inválida.*/

#include <stdio.h>
int converter_nota(char nota){
    switch(nota){
        case 'A':
            return 10;
        case 'B':
            return 8;
        case 'C':
            return 6;
        case 'D':
            return 4;
        case 'F':
            return 0;
        default:
            return -1;
    }
}

int main(){
    char nota;
    printf("Digite a nota alfabética: ");
    scanf("%c", &nota);
    if(converter_nota(nota) == -1)
        printf("Nota inválida.");
    else
        printf("Nota numérica: %d", converter_nota(nota));
    return 0;
}