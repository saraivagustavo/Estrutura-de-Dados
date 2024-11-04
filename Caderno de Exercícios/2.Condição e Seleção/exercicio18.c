/*18. Escreva um programa que leia um peso na Terra e um número relativo a um planeta e imprima o
valor do seu peso neste planeta. A relação de planetas é dada a seguir com o valor das gravidades
relativas à Terra:
n   Gravidade relativa     Planeta
1        0,37              Mercurio
2        0,88               Vênus
3        0,38               Marte
4        2,64              Júpiter
5        1,15              Saturno
6        1,17               Urano*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    float peso, peso_planeta;
    int planeta;
    printf("Digite o peso na Terra: ");
    scanf("%f", &peso);
    printf("Digite o número relativo ao planeta: ");
    scanf("%d", &planeta);
    switch (planeta){
        case 1:
            peso_planeta = peso * 0.37;
            printf("O peso no planeta Mercúrio é: %.2f\n", peso_planeta);
            break;
        case 2:
            peso_planeta = peso * 0.88;
            printf("O peso no planeta Vênus é: %.2f\n", peso_planeta);
            break;
        case 3:
            peso_planeta = peso * 0.38;
            printf("O peso no planeta Marte é: %.2f\n", peso_planeta);
            break;
        case 4:
            peso_planeta = peso * 2.64;
            printf("O peso no planeta Júpiter é: %.2f\n", peso_planeta);
            break;
        case 5:
            peso_planeta = peso * 1.15;
            printf("O peso no planeta Saturno é: %.2f\n", peso_planeta);
            break;
        case 6:
            peso_planeta = peso * 1.17;
            printf("O peso no planeta Urano é: %.2f\n", peso_planeta);
            break;
        default:
            printf("Planeta inválido.\n");
            break;
    }
    return 0;
}