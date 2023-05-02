#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index - function returns nth node of a listint_t linked list
 *
 * @head: head of list
 * @index: index of node starting from 0
 *
 * Return: nth node else NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0 ; head != NULL && x < index ; x++)
	{
		head = head->next;
	}
	return ((x == index && head != NULL) ? head : NULL);
}
