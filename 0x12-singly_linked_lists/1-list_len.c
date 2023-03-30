#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * list_len - counts the elements in a linked list
 * @h: Pointer to the first node
 *
 * Return: Number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	const list_t *curr = h;
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
