#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_listint - prints all elements of a singly linked list, listint_t
 * @h: Pointer to the first node
 *
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t nodes = 0;

	if (!h)
		return (0);

	while (curr)
	{
		printf("%d\n", curr->n);

		curr = curr->next;
		nodes++;
	}

	return (nodes);
}
