#ifndef STACK_H
#define STACK_H

// Estrutura da pilha
typedef struct Stack {
    char *itens;      // Array para armazenar os elementos
    int topo;         // Índice do topo da pilha
    int tamanho;      // Capacidade máxima da pilha
} Stack;

// Funções da pilha
Stack* f_criarStack(int tamanho);
void f_push(Stack *s, char itens);
char f_pop(Stack *s);
char f_peek(Stack *s);
int  f_estaVazia(Stack *s);
void f_free(Stack *s);

#endif