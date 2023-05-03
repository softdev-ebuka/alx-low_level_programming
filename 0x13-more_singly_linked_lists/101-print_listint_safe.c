#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - function that Prints a listint_t linked list
 *
 * @head: head node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *bicycle, *bike;
	size_t count = 0;

	if (head != NULL)
	{
		for (bicycle = head; bicycle != NULL; bicycle = bicycle->next)
		{
			count++;
			printf("[%p] %d\n", (void *) bicycle, bicycle->n);
			bike = head;
			for ( ; bike != bicycle; bike = bike->next)
			{
				if (bike == bicycle->next)
				{
					printf("-> [%p] %d\n", (void *) bicycle->next, bicycle->next->n);
					return (count);
				}
			}
		}
	}
	exit(98);
}
