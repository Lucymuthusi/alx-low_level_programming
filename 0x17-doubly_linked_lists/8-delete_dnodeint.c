/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to be deleted (starts from 0).
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (*head == NULL)
    {
        return (-1); 
    }

    if (index == 0)
    {
        dlistint_t *tmp = *head;
        *head = (*head)->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
        free(tmp);
        return (1);
    }

    dlistint_t *current = *head;
    unsigned int i = 0;
    while (current != NULL && i < index - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL || current->next == NULL)
    {
        return (-1); 
    }

    dlistint_t *tmp = current->next;
    current->next = tmp->next;
    if (tmp->next != NULL)
    {
        tmp->next->prev = current;
    }
    free(tmp);

    return (1);
}
