/*8. Escreva um programa em C que permita ao usuário extrair um dígito específico de uma sequência
de 4 dígitos. O programa deve solicitar ao usuário a sequência de dígitos e a posição x do dígito
que deseja extrair (0 a 4), e então exibir o dígito correspondente.
Dica: Lembre-se de que ao dividir um número inteiro por 10, você “remove” o último dígito. E
ao calcular o resto da divisão desse número por 10, você obtém o último dígito isoladamente.*/

#include <stdio.h>
int main(){
    int numero, posicao, digito;
    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &numero);
    printf("Digite a posição do dígito que deseja extrair (0 a 3): ");
    scanf("%d", &posicao);
    if (posicao == 0) {
        digito = (numero / 1000) % 10; 
    } else if (posicao == 1) {
        digito = (numero / 100) % 10;  
    } else if (posicao == 2) {
        digito = (numero / 10) % 10;    
    } else if (posicao == 3) {
        digito = numero % 10;           
    } else {
        printf("Posição inválida.\n");
        return 0;
    }
    printf("O dígito na posição %d é: %d", posicao, digito);
    return 0;
}