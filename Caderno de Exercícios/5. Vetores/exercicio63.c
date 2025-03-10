/*63. Numa certa eleição, existem 5 candidatos identificados pelos valores 1, 2, . . . , 5. Uma votação
pode ser representada como um vetor em que cada posição indica um eleitor e o conteúdo dessa
posição seu voto. Por exemplo, a sequência (1, 2, 1, 2, 3, 5) indica a existência de seis eleitores,
sendo que os candidatos 1 e 2 obtiveram dois votos e os candidatos 3 e 5 obtiveram um voto
cada. Construa um programa que leia os votos de n eleitores, indique quanto cada candidato
recebeu em votos e qual candidato obteve o maior número de votos.
Exemplo de execução
Digite o número de eleitores (n): 6
Digite os votos dos eleitores (valores de 1 a 5, separados por espaço ou enter):
1
2
1
2
3
5
Resultado da Eleição:
Candidato 1: 2 votos
Candidato 2: 2 votos
Candidato 3: 1 voto
Candidato 4: 0 votos
Candidato 5: 1 voto
Candidato Vencedor: Candidato 1 e Candidato 2 (Empate)*/

#include <stdio.h>
#include <stdio.h>

int main() {
    int n;
    printf("Digite o número de eleitores (n): ");
    scanf("%d", &n);

    int counts[6] = {0};

    printf("Digite os votos dos eleitores (valores de 1 a 5, separados por espaço ou enter):\n");
    for (int i = 0; i < n; i++) {
        int vote;
        scanf("%d", &vote);
        counts[vote]++;
    }
    int max = 0;
    for (int i = 1; i <= 5; i++) {
        if (counts[i] > max) {
            max = counts[i];
        }
    }
    int winners[5];
    int winner_count = 0;
    for (int i = 1; i <= 5; i++) {
        if (counts[i] == max) {
            winners[winner_count++] = i;
        }
    }
    printf("Resultado da Eleição:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Candidato %d: %d ", i, counts[i]);
        if (counts[i] == 1) {
            printf("voto\n");
        } else {
            printf("votos\n");
        }
    }
    printf("Candidato Vencedor: ");
    if (winner_count == 1) {
        printf("Candidato %d", winners[0]);
    } else {
        for (int i = 0; i < winner_count; i++) {
            printf("Candidato %d", winners[i]);
            if (i < winner_count - 1) {
                printf(" e ");
            }
        }
        printf(" (Empate)");
    }
    printf("\n");
    return 0;
}