#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: Pointer to first node in the list.
 *
 * Return: Number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t len = 0;

	while (curr)
	{
		len++;
		curr = curr->next;
	}

	return (len);
}
