/*64. Elabore uma função com assinatura int sao_iguais(int v1[], int v2[], int n1, int n2) 
que retorna 1 se o vetor v1, com n1 elementos, for igual a v2, este com tamanho n2. Caso contrário, seu programa deve retornar 0.*/

#include <stdio.h>
int sao_iguais(int v1[], int v2[], int n1, int n2){
    if(n1 != n2){
        return 0;
    }
    for(int i = 0; i < n1; i++){
        if(v1[i] != v2[i]){
            return 0;
        }
    }
    return 1;
}