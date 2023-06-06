#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t* insert_nodeint_at_index(listint_t** head, unsigned int idx, int n)
    if (*head == NULL || idx == 0) {
       
        listint_t* new_node = malloc(sizeof(listint_t));
        if (new_node == NULL) {
           
            return (NULL);}
        new_node->n
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

  
    listint_t* current = *head;
    unsigned int count = 0;
    while (current != NULL && count < idx - 1) {
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL) {
        return (NULL);
    }
    listint_t* new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
       
        return (NULL);
    }

  
    new_node->n;
    new_node->next = current->next;

 
    current->next = new_node;
    return (new_node);
}

