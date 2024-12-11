#include "linkedlist.h" // Include the user-defined header file for the list data structure.
#include <stdio.h>

/*Dada a implementação base de uma lista simplesmente encadeada (disponível em https://github.com/thiagopx/ed/tree/master/11_linkedlist), sua tarefa é implementar e testar a função LinkedList *ll_concatenated(LinkedList *l1, LinkedList *l2).
A função ll_concatenated deve receber duas listas l1 e l2 como entrada e retornar uma nova lista encadeada resultante da concatenação dos elementos das listas.*/

int main(void)
{
    //criação das listas encadeadas
    LinkedList *l1 = ll_create();
    LinkedList *l2 = ll_create();

    //inserção dos elementos na primeira lista
    ll_insert_end(l1, 1);
    ll_insert_end(l1, 2);
    ll_insert_end(l1, 3);

    //inserção dos elementos na segunda lista
    ll_insert_end(l2, 4);
    ll_insert_end(l2, 5);
    ll_insert_end(l2, 6);

    //concatenação das listas l1 e l2 na lista l3
    LinkedList *l3 = ll_concatenate(l1, l2);

    //impressão da lista concatenada
    printf("Lista concatenada: ");
    ll_print(l3);

    //liberação de memória
    ll_free(l1); 
    ll_free(l2); 
    ll_free(l3); 

    return 0; 
}
