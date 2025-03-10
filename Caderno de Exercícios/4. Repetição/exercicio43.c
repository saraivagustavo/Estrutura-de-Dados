/*43. Faça um programa que leia um valor n e logo após um número x. Em seguida, leia n valores e, ao
final imprima em qual posição x aparece. Caso x não esteja na sequência, imprimir a mensagem
Não.
Exemplo de Execução
Digite o valor de n: 6
Digite o valor de x: 9
Digite 6 valores para a sequência:
2 5 9 4 8 1
O valor 9 aparece na posição 2.
Digite o valor de n: 4
Digite o valor de x: 7
Digite 4 valores para a sequência:
3 1 4 6
Não.*/

#include <stdio.h>
int main(){
    int n, x, posicao = -1;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite %d valores para a sequência:\n", n);
    for(int i = 0; i < n; i++){
        int numero;
        scanf("%d", &numero);
        if(numero == x){
            posicao = i + 1;
            break;
        }
    }
    if(posicao != -1){
        printf("O valor %d aparece na posição %d.\n", x, posicao);
    }else{
        printf("Não.\n");
    }
    return 0;
}