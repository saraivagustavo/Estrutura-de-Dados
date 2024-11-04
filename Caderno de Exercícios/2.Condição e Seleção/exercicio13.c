/*13. Faça um programa que verifique se três valores a, b e c podem ser os comprimentos dos lados de
um triângulo. Caso positivo, seu programa deve informar se o triângulo é equilátero, isósceles ou
escaleno. Caso contrário, seu programa deve escrever a mensagem “Não formam triângulo”.
Obs. 1: Um triângulo equilátero possui os comprimentos dos três lados iguais.
Obs. 2: Um triângulo isósceles possui pelo menos dois lados de mesma medida.
Obs. 3: Um triângulo escaleno possui todos os seus lados com medidas diferentes.
Obs. 4: Supor que os valores lidos são inteiros e positivos.
Obs. 5: Em todo triângulo, qualquer lado tem medida menor que a soma das medidas dos outros
dois.*/

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) { //todos os lados iguais
            printf("Triângulo equilátero.");
        } else if (a == b || b == c || a == c) { //pelo menos dois lados iguais
            printf("Triângulo isósceles.");
        } else { //todos os lados diferentes
            printf("Triângulo escaleno.");
        }
    } else {
        printf("Não formam triângulo.");
    }
    return 0;
}