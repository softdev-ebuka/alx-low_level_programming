#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: points to head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (current)
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
