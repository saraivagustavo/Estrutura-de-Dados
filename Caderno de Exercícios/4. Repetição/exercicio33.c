/*33. Desenvolva um programa que leia dois valores a e b (a ≤ b) e mostre os seguintes resultados: 
(i) todos os valores em [a,b]; 
(ii) todos os valores ímpares em [a,b]; 
(iii) todos os valores ímpares em [a,b] e múltiplos de 3.*/

#include <stdio.h>
int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    if(a > b){
        printf("O valor de a precisa ser menor que b.\n");
    }
    else{
        printf("Todos os valores em [%d, %d]: ", a, b); 
        for(int i = a; i <= b; i++){ //i = a, pois o valor de a é o menor valor (verificado na condição if)
            printf("%d ", i);
        }
    printf("\n");
        printf("Todos os valores ímpares em [%d, %d]: ", a, b);
        for(int i = a; i <= b; i++){ //i = a, pois o valor de a é o menor valor (verificado na condição if)
            if(i % 2 != 0){ //se o resto da divisão de i por 2 for diferente de 0, então i é ímpar
                printf("%d ", i);
            }
        }
    printf("\n");
        printf("Todos os valores ímpares em [%d, %d] e múltiplos de 3: ", a, b);
        for(int i = a; i <= b; i++){ //i = a, pois o valor de a é o menor valor (verificado na condição if)
            if(i % 2 != 0 && i % 3 == 0){ //mesma condição do if anterior e o resto da divisão de i por 3 for igual a 0, então i é ímpar e múltiplo de 3
                printf("%d ", i);
            }
        }
    printf("\n");
    }
    return 0;
}