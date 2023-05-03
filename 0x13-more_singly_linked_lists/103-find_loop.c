#include "lists.h"
#include <stdlib.h>

/**
 * *find_listint_loop - function that finds the loop in a linked list.
 *
 * @head: head node of linked list.
 *
 * Return: node where the loop start else NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bicycle = head;
	listint_t *bike = head;

	if (!head)
		return (NULL);

	while (bike && bike->next)
	{
		bicycle = bicycle->next;
		bike = bike->next->next;
		if (bicycle == bike)
		{
			bicycle = head;
			while (bicycle != bike)
			{
				bicycle = bicycle->next;
				bike = bike->next;
			}
			return (bike);
		}
	}
	return (NULL);
}
