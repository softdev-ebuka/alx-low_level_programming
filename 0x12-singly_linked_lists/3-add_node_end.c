#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node_end - add new nodes at end of linked list
 * @head: head of list
 * @str: string
 *
 * Return: address of new element else null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
	free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		list_t *end_node = *head;

		while (end_node->next)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
	}

	return (new_node);
}
