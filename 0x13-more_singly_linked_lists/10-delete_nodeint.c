#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 *index of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 if successful otherwise return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}
	*current = *head;
       	*previous = NULL;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (previous == NULL)
	{
		*head = current->next;
	}
	else
	{
		previous->next = current->next;
	}
	free(current);
	return (1);
}
