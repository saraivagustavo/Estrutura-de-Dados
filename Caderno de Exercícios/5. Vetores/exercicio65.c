/*65. Implemente uma função com assinatura int count_consonants(char str[], int n) que retorna o número 
de consoantes num vetor de caracteres str composto apenas por vogais, consoantes e dígitos.*/

#include <stdio.h>
int count_consonants(char str[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
                count++;
            }
        }
    }
    return count;
}