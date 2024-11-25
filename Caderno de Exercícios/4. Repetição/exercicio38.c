/*38. Faca um programa que apresente na tela a tabela de conversão de graus Celsius para Fahrenheit
no intervalo de -100°C a 100°C com valores igualmente espaçados (5 em 5).*/

#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Celsius\tFahrenheit\n");
    for(celsius = -100; celsius <= 100; celsius += 5){
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.2f\t%.2f\n", celsius, fahrenheit);
    }
    return 0;
}