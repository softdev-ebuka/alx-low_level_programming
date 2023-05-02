#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of list
 *
 * Return: sum of all the data else 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	sum = sum + head->n;

	while (head->next != NULL)
	{
		head = head->next;
		sum = sum + head->n;
	}
	return (sum);
}
