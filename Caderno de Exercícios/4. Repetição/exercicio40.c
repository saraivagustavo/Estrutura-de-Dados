/*40. Escreva um programa que leia n valores e encontre o maior e o menor deles. Mostre o resultado.*/

#include <stdio.h>
int main(){
    int n, numero, maior, menor;
    printf("Quantos valores deseja digitar? ");
    scanf("%d", &n);
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
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}