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
	list_t *new_node;
	
	if (head == NULL || str == NULL)
	return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
