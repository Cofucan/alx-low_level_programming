#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given index of a list
 * @h: Pointer to first node in the list.
 * @idx: Index at which to insert the node, starting from 0.
 * @n: Data to be assigned to new node.
 *
 * Return: Address of new node, or NULL if it can't be added.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new_node;
	unsigned int index;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new_node);
	}

	for (index = 0; curr->next; index++)
	{
		if (index == idx)
		{
			new_node->n = n;
			new_node->next = curr;
			new_node->prev  = curr->prev;
			curr->prev->next = new_node;
			curr->prev = new_node;
			return (new_node);
		}
		curr = curr->next;
	}

	if (index == idx)
	{
		add_dnodeint_end(h, n);
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
