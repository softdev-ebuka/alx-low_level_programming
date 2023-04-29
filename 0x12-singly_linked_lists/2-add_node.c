#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds new node at beginning of list_t list
 * @head: head of list
 * @str: string to be stored
 *
 * Return: new node else null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (!head || !str)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	char *str_copy = strdup(str);

	if (!str_copy)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_copy;
	new_node->len = strlen(str)
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
