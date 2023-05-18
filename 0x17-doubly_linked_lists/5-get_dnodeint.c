#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: Pointer to first node in the list.
 * @index: Index at which to find the node, starting from 0.
 *
 * Return: Node, or NULL if it does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int idx;

	if (!head)
		return (NULL);

	for (idx = 0; curr; idx++)
	{
		if (idx == index)
			return (curr);
		curr = curr->next;
	}

	return (NULL);
}
