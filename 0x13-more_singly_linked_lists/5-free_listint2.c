#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head)
		return;
	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}

	*head = NULL;
}
