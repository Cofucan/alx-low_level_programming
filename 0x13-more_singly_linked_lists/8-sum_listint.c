#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * sum_listint - sums all data(n) in the linked list
 * @head: Pointer to the first node
 *
 * Return: Sum of all data(n)
 */

int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	if (!head)
		return (sum);

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
