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
#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *create_new_node(int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    new_node->n = n;
    new_node->next = NULL;
    return new_node;
}

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (idx == 0)
    {
        listint_t *new_node = create_new_node(n);
        if (new_node == NULL)
        {
            return NULL;
        }
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    listint_t *current = *head;
    unsigned int i = 0;

    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL || current->next == NULL)
    {
        return NULL;
    }

    listint_t *new_node = create_new_node(n);
    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}

void print_list(listint_t *head)
{
    listint_t *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->n);
        current = current->next;
    }
    printf("NULL\n");
}

void free_list(listint_t *head)
{
    listint_t *current = head;
    while (current != NULL)
    {
        listint_t *temp = current;
        current = current->next;
        free(temp);
    }
}

int main()
{
    listint_t *head = NULL;

    // Insert nodes at different positions
    insert_nodeint_at_index(&head, 0, 10);
    insert_nodeint_at_index(&head, 1, 20);
    insert_nodeint_at_index(&head, 1, 30);
    insert_nodeint_at_index(&head, 3, 40);

    // Print the updated list
    print_list(head);

    // Free the list
    free_list(head);

    return 0;
}

