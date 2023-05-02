#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node = NULL, *curr = *head;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (curr != NULL && i < index)
	{
		previous_node = curr;
		curr = curr->next;
		x++;
	}

	if (!curr)
		return (-1);

	previous_node->next = curr->next;
	free(curr);
	return (1);
}
