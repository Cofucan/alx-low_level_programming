#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * get_nodeint_at_index - returns the nth node of a singly linked list
 * @head: Pointer to the first node
 * @index: The index of the node to find
 *
 * Return: Address of the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_to_find = head;
	unsigned int u;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	for (u = 0; (u < index); u++)
	{
		/* If we get to the end of the list before the getting to the index */
		if (!node_to_find)
			break;

		node_to_find = node_to_find->next;
	}

	return (node_to_find);
}
