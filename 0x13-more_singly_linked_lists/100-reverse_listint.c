#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: head node
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first_node, *next_node;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	first_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = first_node
		first_node = *head;
		*head = next_node;
	}

	*head = first_node
	return (*head);
}

