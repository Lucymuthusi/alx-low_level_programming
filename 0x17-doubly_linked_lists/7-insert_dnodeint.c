#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in a dlistint_t list.
 * @h: Double pointer to the head of the list.
 * @idx: The index where the new node should be added (starts from 0).
 * @n: The integer to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    // Handle boundary cases:
    if (idx == 0) {
        return (add_dnodeint(h, n));  // Efficient insertion at the beginning
    }

    // Handle case where the list is empty (idx cannot be 1 or more)
    if (*h == NULL) {
        return (NULL);  // Invalid index for an empty list
    }

    // Find the insertion point (node before the desired index)
    dlistint_t *current = *h;
    unsigned int i = 0;
    while (current != NULL && i < idx - 1) {
        current = current->next;
        i++;
    }

    // Check if the index is beyond the list's length
    if (current == NULL || i < idx - 1) {
        return (NULL);  // Invalid index (beyond the list)
    }

    // Create the new node
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return (NULL);  // Memory allocation failed
    }
    new_node->n = n;

    // Insert the new node
    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL) {
        current->next->prev = new_node;
    }
    current->next = new_node;

    return (new_node);
}
