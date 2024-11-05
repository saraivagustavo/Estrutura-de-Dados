/*15. Faça um programa que calcule e imprima o valor da conta de água, a partir da leitura do consumo
de água do mês anterior e do mês atual marcado no hidrômetro. Sabe-se que a conta de água
é formada pela tarifa de água somada à tarifa de esgoto (2,5% da conta de água) e à tarifa de
conservação do hidrômetro (R$ 5,00). O consumo de água é de acordo com a tabela mostrada na
sequência:
Consumo (m3)               Tarifa (R$/m3)
0 até 10 (inclusive)           0,69
11 até 15 (inclusive)          1,17
16 até 25 (inclusive)          1,48
Acima de 25                    1,60*/

#include <stdio.h>
int main(){
    int consumo_anterior, consumo_atual;
    float conta_agua, tarifa_agua, tarifa_esgoto, tarifa_hidrometro;
    printf("Digite o consumo de água do mês anterior: ");
    scanf("%d", &consumo_anterior);
    printf("Digite o consumo de água do mês atual: ");
    scanf("%d", &consumo_atual);
    if (consumo_atual <= 10) {
        tarifa_agua = 0.69;
    } else if (consumo_atual <= 15) {
        tarifa_agua = 1.17;
    } else if (consumo_atual <= 25) {
        tarifa_agua = 1.48;
    } else {
        tarifa_agua = 1.60;
    }
    conta_agua = (consumo_atual - consumo_anterior) * tarifa_agua;
    tarifa_esgoto = conta_agua * 0.025;
    tarifa_hidrometro = 5.00;
    conta_agua += tarifa_esgoto + tarifa_hidrometro;
    printf("O valor da conta de água é: R$ %.2f", conta_agua);
    return 0;
}
