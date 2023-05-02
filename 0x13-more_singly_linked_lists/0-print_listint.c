#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elementsof a listint_t list
 *
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0 ; h != NULL ; count++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
