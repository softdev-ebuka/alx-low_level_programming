#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns number of elements in a listint_t list
 *
 * @h: head of list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t lenght = 0;

	for (; h != NULL ; h = h->next)
	{
		lenght++;
	}
	return (lenght);
}
