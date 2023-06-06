#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 *a listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	listint_t *temp = *head;
	int data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
