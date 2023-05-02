#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - add a new node at the end of a listint_t list
 *
 * @head: head of list
 * @n: integer contained in the new node
 *
 * Return: new node or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		listint_t *end_node = *head;

		while (end_node->next)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
	}
	return (new_node);
}
