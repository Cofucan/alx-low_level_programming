#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * insert_nodeint_at_index - adds a new node at a specified index
 * @head: Pointer to the first node
 * @idx: Index at which to add new node
 * @n: Data to assign to new node member
 *
 * Return: Address of the new node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	listint_t *node_to_add;
	int x = 0;

	/* If list is empty */
	if (!(*head))
		return (NULL);

	/* Create new node and return null of allocation fails */
	node_to_add = malloc(sizeof(listint_t));
	if (!node_to_add)
		return (NULL);

	/* Assign data to node member */
	node_to_add->n = n;

	/* Traverse the list until the last element before the index to be added */
	while (x < (idx - 1))
	{
		curr = curr->next;
		x++;
	}

	/* New node should point to whatever was formerly at that index */
	node_to_add->next = curr->next;

	/* The node before the specified index should now point to the new node */
	curr->next = node_to_add;

	return (node_to_add);
}
