#include "lists.h"

/**
 * list_len - function that returns num of elements in linked list_t list
 *
 * @h: head of the list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return count;
}
