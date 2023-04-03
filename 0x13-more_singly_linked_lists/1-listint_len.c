#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * listint_len - returns the number of nodes in a singly-linked list
 * @h: Pointer to the first node
 *
 * Return: Number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t nodes = 0;

	if (!h)
		return (0);

	while (curr)
	{
		curr = curr->next;
		nodes++;
	}

	return (nodes);
}
