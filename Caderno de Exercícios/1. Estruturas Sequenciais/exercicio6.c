/*6. Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de
um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo
usando este link EM MINUTOS.*/

#include <stdio.h>
int main(){
    float tamanho, velocidade, tempo;
    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f", &tamanho);
    printf("Digite a velocidade da internet em Mbps: ");
    scanf("%f", &velocidade);
    tempo = (tamanho * 8) / velocidade;
    printf("O tempo aproximado de download é: %.2f minutos", tempo);
    return 0;
}