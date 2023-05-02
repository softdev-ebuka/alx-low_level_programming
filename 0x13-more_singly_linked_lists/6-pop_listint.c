#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data(n)
 *
 * @head: head of list
 *
 * Return: head nodes data else 0 if link list is empty
 */
int pop_listint(listint_t **head)
{
	int content = 0;
	listint_t *tmp;

	if (*head != NULL)
	{
	content = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	}

	return (content);
}
