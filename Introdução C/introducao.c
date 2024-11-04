#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello world!\n");
    //declaração de variáveis
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Nossa! %d?! Tu aparenta ter %d\n ", idade, idade - 5);
    return 0;
}
