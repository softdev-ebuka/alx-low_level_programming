#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: the head of the linked list to print
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p = head;
	const listint_t *n;
	size_t count = 0;

	while (p)
	{
		count++;
		printf("[%p] %d\n", (void *)p, p->n);

		n = p->next;
		if (n >= p)
		{
			printf("-> [%p] %d\n", (void *)n, n->n);
			break;
		}

		p = n;
	}
	return (count);
}
