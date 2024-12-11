#include "linkedlist.h" // Include the user-defined header file for the linked list data structure.
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for the linked list.
struct list
{
    ListNode *first; // A pointer to the first node in the linked list.
};

// Define a structure for a node in the linked list.
struct list_node
{
    int info;       // An integer value stored in the node.
    ListNode *next; // A pointer to the next node in the linked list.
};

// Function to create an empty linked list and return a pointer to it.
LinkedList *ll_create()
{
    LinkedList *l = (LinkedList *)malloc(sizeof(LinkedList)); // Allocate memory for the list structure.
    l->first = NULL;                                          // Initialize the 'first' pointer to NULL, indicating an empty list.
    return l;                                                 // Return a pointer to the newly created list.
}

// Function to insert an element at the beginning of the linked list.
void ll_insert(LinkedList *l, int v)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode)); // Allocate memory for a new node.
    node->info = v;                                        // Set the 'info' field of the new node to the provided value.
    node->next = l->first;                                 // Make the new node point to the current first node.
    l->first = node;                                       // Update the 'first' pointer to point to the new node.
}

// Function to free the memory used by the linked list.
void ll_free(LinkedList *l)
{
    ListNode *p = l->first;
    while (p != NULL)
    {
        ListNode *t = p->next; // Store a reference to the next node.
        free(p);               // Free the memory allocated for the current node.
        p = t;                 // Move to the next node.
    }
    free(l); // Free the memory allocated for the list structure itself.
}

// Function to display all elements of the linked list.
void ll_print(LinkedList *l)
{
    for (ListNode *p = l->first; p != NULL; p = p->next)
    {
        printf("%d ", p->info); // Print the 'info' field of each node.
    }
    printf("\n"); // Print a newline character to separate the output.
}

/*Dada a implementação base de uma lista simplesmente encadeada (disponível em https://github.com/thiagopx/ed/tree/master/11_linkedlist), sua tarefa é implementar e testar a função LinkedList *ll_concatenated(LinkedList *l1, LinkedList *l2).
A função ll_concatenated deve receber duas listas l1 e l2 como entrada e retornar uma nova lista encadeada resultante da concatenação dos elementos das listas.*/

void ll_insert_end(LinkedList *list, int value) {
    ListNode *new_node = (ListNode *)malloc(sizeof(ListNode));
    new_node->info = value;
    new_node->next = NULL;

    if (list->first == NULL) {
        //se a lista estiver vazia, o novo nó é o primeiro
        list->first = new_node;
    } else {
        //percorre até o último nó
        ListNode *current = list->first;
        while (current->next != NULL) {
            current = current->next;
        }
        //anexa o novo nó ao final
        current->next = new_node;
    }
}

LinkedList *ll_concatenate(LinkedList *l1, LinkedList *l2)
{
    LinkedList *l3 = ll_create(); //cria uma nova lista encadeada

    //copia os elementos da primeira lista (l1) para a nova lista (l3)
    for (ListNode *p = l1->first; p != NULL; p = p->next){
        ll_insert_end(l3, p->info); //insere cada elemento da primeira lista na nova lista
    }

    //copia os elementos da segunda lista (l2) para a nova lista (l3)
    for (ListNode *p = l2->first; p != NULL; p = p->next){
        ll_insert_end(l3, p->info); //insere cada elemento da segunda lista na nova lista
    }

    return l3; 
}