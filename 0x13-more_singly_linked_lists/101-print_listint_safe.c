#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 *
 * @head: head node of linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t leng = 0;
	const listint_t *h = head, *old_node = NULL;

	while (h)
	{
		leng++;
		printf("[%p] %d\n", (void *)h, h->n);
		if (old_node && old_node >= h)
			break;
		old_node = h;
		h = h->next;
	}

	if (h)
	{
		leng++;
		printf("-> [%p] %d\n", (void *)h, h->n);
	}

	return (leng);
}
