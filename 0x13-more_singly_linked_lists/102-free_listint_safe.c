#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list
 *
 * @h: head node of the linked list
 *
 * Return: Number of nodes in the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *n_node, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	n_node = *h;

	while (n_node)
	{
		count++;
		tmp = n_node;
		n_node = n_node->next;
		free(tmp);
		if (tmp <= n_node)
			break;
	}

	*h = NULL;

	return (count);
}
