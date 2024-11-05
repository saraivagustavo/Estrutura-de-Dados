/*12. Calcule a média aritmética das três notas de um aluno e mostre, além do valor da média, uma
mensagem de acordo com as condições explicitadas a seguir:
Condição            Mensagem
Média ≥ 7,0         Aprovado
5,0 ≤ Média < 7,0   Recuperação
Média < 5,0         Reprovado*/

#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7.0) {
        printf("Aprovado");
    } else if (media >= 5.0) {
        printf("Recuperação");
    } else {
        printf("Reprovado");
    }
    return 0;
}