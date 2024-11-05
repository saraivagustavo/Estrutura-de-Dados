/*2. O mesmo que o exercício anterior, porém convertendo de Celsius para Farenheit.*/

#include <stdio.h>
int main(){
    float farenheit, celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    farenheit = (celsius * 9/5) + 32;
    printf("A temperatura em Farenheit equivale a: %.2f", farenheit);
    return 0;
}