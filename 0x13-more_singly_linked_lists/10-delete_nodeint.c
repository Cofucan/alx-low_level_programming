#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: Pointer to the first node
 * @index: Index at which to delete the node
 *
 * Return: 1 if success of -1 if failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *node_to_delete;
	unsigned int x = 0;

	/* If list is empty */
	if (!(*head))
		return (-1);

	/* If index is 0, remove the first node */
	if (index == 0)
	{
		curr = curr->next;
		free(*head);
		*head = curr;
		return (1);
	}

	/* Traverse the list until the last element before the index to be deleted */
	while (x < (index - 1))
	{
		if (!curr->next)
			return (-1);
		curr = curr->next;
		x++;
	}

	node_to_delete = curr->next;

	/* Prevoius node should point to node that comes after deleted node */
	curr->next = curr->next->next;

	free(node_to_delete);

	return (1);
}
