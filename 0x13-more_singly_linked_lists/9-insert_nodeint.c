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
	unsigned int x = 0;

	/* If list is empty */
	if (!(*head) && idx)
		return (NULL);

	/* If index is 0, add the new node at the beginning of the list */
	if (idx == 0)
	{
		node_to_add = add_nodeint(&(*head), n);
		return (node_to_add);
	}

	/* Create new node and return null if allocation fails */
	node_to_add = malloc(sizeof(listint_t));
	if (!node_to_add)
		return (NULL);

	/* Assign data to node member */
	node_to_add->n = n;

	/* Traverse the list until the last element before the index to be added */
	while (x < (idx - 1))
	{
		if (!curr->next)
			return (NULL);
		curr = curr->next;
		x++;
	}

	/* New node should point to whatever was formerly at that index */
	node_to_add->next = curr->next;

	/* The node before the specified index should now point to the new node */
	curr->next = node_to_add;

	return (node_to_add);
}

/**
 * add_nodeint - adds a new node at the beginning of a singly-linked list
 * @head: Address of pointer to the first node
 * @n: Value to set member to after declaration
 *
 * Return: Address of the new node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
