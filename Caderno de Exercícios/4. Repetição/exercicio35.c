/*35. Faça um programa que leia um valor n indicando a quantidade de valores a ler em seguida. Um
número deve ser lido por vez e seu programa deve classificá-lo como positivo ou negativo.*/

#include <stdio.h>
int main(){
    int n, num;
    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num < 0)
            printf("%d é negativo\n", num);
        else
            printf("%d é positivo\n", num);
    }
    return 0;
}