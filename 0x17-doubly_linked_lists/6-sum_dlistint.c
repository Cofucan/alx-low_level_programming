#include "lists.h"

/**
 * sum_dlistint - sums up all the data in a doubly linked list
 * @head: Pointer to first node in the list.
 *
 * Return: Sum of integers in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int sum = 0;

	if (!head)
		return (0);

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
