#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that free a listint_t list
 *
 * @head: head of list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
