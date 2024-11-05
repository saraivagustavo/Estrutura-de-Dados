/*31. Implemente uma função com assinatura int soma_com_ponteiros(int *a, int *b). A função
soma_com_ponteiros deve receber dois ponteiros para inteiros a e b como argumentos, calcular
a soma dos valores apontados pelos ponteiros e retornar o resultado da soma. Para fins de teste,
implemente o programa principal para que lê dois números inteiros fornecidos via teclado,
chama a função soma_com_ponteiros para calcular a soma e imprime o resultado.
Exemplo de Execução
Digite o valor de a: 5
Digite o valor de b: 10
A soma de 5 e 10 é: 15*/

int soma_com_ponteiros(int *a, int *b){
    return *a + *b;
}

int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("A soma de %d e %d é: %d", a, b, soma_com_ponteiros(&a, &b));
    return 0;
}