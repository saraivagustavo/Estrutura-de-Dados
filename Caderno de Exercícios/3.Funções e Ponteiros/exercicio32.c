/*32. Implemente uma função com assinatura void trocar_valores(int *a, int *b) que troque
os valores de duas variáveis inteiras apontadadas pelos ponteiros a e b. A seguir, implemente
o programa principal que leia dois números inteiros fornecidos via teclado, chame a função
trocar_valores para trocar os valores e imprima os novos valores das variáveis.
Exemplo de Execução
Digite o valor de a: 5
Digite o valor de b: 10
Valores antes da troca: a = 5, b = 10
Valores depois da troca: a = 10, b = 5*/

void trocar_valores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Valores antes da troca: a = %d, b = %d\n", a, b);
    trocar_valores(&a, &b);
    printf("Valores depois da troca: a = %d, b = %d", a, b);
    return 0;
}