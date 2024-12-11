#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Define the LinkedList and ListNode data structures
typedef struct list LinkedList;    // Represents a linked list
typedef struct list_node ListNode; // Represents a node in the linked list

// Operations on the linked list

// Create an empty linked list and return a pointer to it
LinkedList *ll_create();

// Insert an element at the beginning of the linked list
void ll_insert(LinkedList *l, int v);

// Concatenate two linked lists, placing l2 after l1
LinkedList *ll_concatenate(LinkedList *l1, LinkedList *l2);
void ll_insert_end(LinkedList *list, int value); // Insert an element at the end of the linked list

// Free the memory used by the linked list
void ll_free(LinkedList *l);

// Display all elements of the linked list
void ll_print(LinkedList *l);

#endif