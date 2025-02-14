#include "stack.h"
#include <stdlib.h>

// Cria uma nova pilha com capacidade definida
Stack* f_criarStack(int tamanho){
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s->tamanho = tamanho;
    s->topo = -1;
    s->itens = (char*)malloc(s->tamanho * sizeof(char));
    return s;
}

// Insere um elemento na pilha
void f_push(Stack *s, char item){
    if(s->topo == s->tamanho - 1){
        // Aumenta a capacidade da pilha se necessário
        s->tamanho *= 2;
        s->itens = (char*)realloc(s->itens, s->tamanho * sizeof(char));
    }
    s->itens[++(s->topo)] = item;
}

// Remove o elemento do topo da pilha
char f_pop(Stack *s){
    if (!isEmpty(s)){
        return s->itens[(s->topo)--];
    }
    return '\0'; // Retorna caractere nulo se a pilha estiver vazia
}

// Retorna o elemento do topoo da pilha sem remover ele
char f_peek(Stack *s){
    if (!isEmpty(s)){
        return s->itens[s->topo];
    }
    return '\0';
}

// Verifica se a pilha está vazia
int f_estaVazia(Stack *s){
    return s->topo == -1;
}

// Libera a memória alocada para a pilha (alocação dionâmica precisa ser liberada, ELIMINAR O CONTEÚDO MUAHAHAHA)
void f_free(Stack *s){
    free(s->itens);
    free(s);
}