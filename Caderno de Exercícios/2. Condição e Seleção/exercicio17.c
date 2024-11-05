/*17. Escreva um programa que leia o número correspondente ao mês atual e os dígitos (somente os
quatro números) de uma placa de veículo, e através do número finalizador da placa (algarismo
da casa das unidades) determine se o IPVA do veículo vence no mês corrente. Confira a tabela
na sequência que relaciona o final da placa como mês para pagamento de IPVA.
Final        Mês       Final (cont.)    Mês (cont.)
 1         Janeiro      6              Junho
 2         Fevereiro    7              Julho
 3         Março        8              Agosto
 4         Abril        9              Setembro
 5         Maio         0              Outubro
Obs.: O número da placa deve ser lido como tipo inteiro.*/

#include <stdio.h>
int main() {
    int numeros_placa, ultimo_digito;
    printf("Digite os números da placa: ");
    scanf("%d", &numeros_placa);
    ultimo_digito = numeros_placa % 10;
    switch (ultimo_digito) {
    case 1:
    printf("O IPVA vence em Janeiro.\n");
    break;
    case 2:
    printf("O IPVA vence em Fevereiro.\n");
    break;
    case 3:
    printf("O IPVA vence em Março.\n");
    break;
    case 4:
    printf("O IPVA vence em Abril.\n");
    break;
    case 5:
    printf("O IPVA vence em Maio.\n");
    break;
    case 6:
    printf("O IPVA vence em Junho.\n");
    break;
    case 7:
    printf("O IPVA vence em Julho.\n");
    break;
    case 8:
    printf("O IPVA vence em Agosto.\n");
    break;
    case 9:
    printf("O IPVA vence em Setembro.\n");
    break;
    case 0:
    printf("O IPVA vence em Outubro.\n");
    default:
    printf("Dígito inválido.\n");
    break;
    }
    return 0;
}