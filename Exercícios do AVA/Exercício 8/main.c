#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Função para verificar se os caracteres estão balanceados
int f_estaBalanceada(const char *filename){
    FILE *arquivo = fopen(filename, "r");
    if(!arquivo){
        perror("Erro ao abrir o arquivo");
        return 0;
    }

    Stack *s = f_criarStack(10); // Cria uma pilha inicial com capacidade 10
    char caracter;

    while ((caracter = fgetc(arquivo)) != EOF) {
        if(caracter == '(' || caracter == '[' || caracter == '{') {
            push(s, caracter);
        }else if(caracter == ')' || caracter == ']' || caracter == '}') {
            if(f_estaVazia(s)) {
                // Se a pilha estiver vazia, há mais fechamentos do que aberturas
                f_free(s);
                fclose(arquivo);
                return 0;
            }

            char topo = f_peek(s);
            if ((caracter == ')' && topo == '(') ||
                (caracter == ']' && topo == '[') ||
                (caracter == '}' && topo == '{')){
                pop(s); // Remove o topo se houver correspondência
            }else{
                // Caso contrário, os caracteres não estão balanceados
                f_free(s);
                fclose(arquivo);
                return 0;
            }
        }
    }
    fclose(arquivo);
    int result = f_estaVazia(s); // Se a pilha estiver vazia, está balanceada
    f_free(s);
    return result;
}

int main(char *argv[]){
    if(f_estaBalanceada(argv[1])){
        printf("success\n");
    }else{
        printf("fail\n");
    }

    return 0;
}