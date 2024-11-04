/*1. Faça um programa que leia a temperatura em graus Farenheit (F), converta-a para graus Celsius
e mostre a temperatura convertida na tela.*/

#include <stdio.h>
int main(){
    float farenheit, celsius;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &farenheit);
    celsius = (farenheit - 32) * 5/9;
    printf("A temperatura em Celsius equivale a: %.2f", celsius);
    return 0;
}