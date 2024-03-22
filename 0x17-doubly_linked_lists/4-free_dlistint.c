#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: No return value (void)
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
