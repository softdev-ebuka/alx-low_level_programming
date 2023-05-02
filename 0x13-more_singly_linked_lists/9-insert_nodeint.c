#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer contained in the new node
 *
 * Return: new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *prev_node = NULL, *curr_node = *head;
	unsigned int x;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	for (x = 0 ; curr_node != NULL && x < idx ; x++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (x < idx)
	{
		free(new_node);
		return (NULL);
	}

	if (prev_node == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = curr_node;
		prev_node->next = new_node;
	}

	return (new_node);
}
