/*41. Faça um programa que imprima a média de n números (n é um valor positivo lido do teclado)
excluindo o menor e o maior deles. Seu programa deve tratar casos em que n < 3 exibindo uma
mensagem de erro.*/

#include <stdio.h>
int main(){
    int n, numero, maior, menor, soma = 0;
    float media;
    printf("Quantos valores deseja digitar? ");
    scanf("%d", &n);
    if(n < 3){
        printf("Erro: a quantidade de números deve ser maior ou igual a 3.\n");
        return 1;
    }
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(i == 0){
            maior = menor = numero;
        }else{
            if(numero > maior){
                maior = numero;
            }
            if(numero < menor){
                menor = numero;
            }
        }
        soma += numero;
    }
    soma -= maior + menor;
    media = (float)soma / (n - 2);
    printf("Media dos numeros excluindo o maior e o menor: %.2f\n", media);
    return 0;
}