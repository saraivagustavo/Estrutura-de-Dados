/*42. Crie um programa que leia uma sequência composta por dígitos 0 e 1. Ao concluir a entrada,
exiba a contagem de zeros seguida pela contagem de uns presentes na sequência. A sequência de
entrada será encerrada quando um número negativo for inserido.
Exemplo de Execução
Digite uma sequência (0 ou 1, -1 para encerrar):
1
0
1
0
0
1
1
-1
Quantidade de 0’s: 3
Quantidade de 1’s: 4*/

#include <stdio.h>
int main(){
    int zero = 0, um = 0, numero;
    printf("Digite uma sequência (0 ou 1, -1 para encerrar):\n");
    while(1){
        scanf("%d", &numero);
        if(numero < 0){
            break;
        }
        if(numero == 0){
            zero++;
        }else if(numero == 1){
            um++;
        }
    }
    printf("Quantidade de 0's: %d\nQuantidade de 1's: %d\n", zero, um);
    return 0;
}