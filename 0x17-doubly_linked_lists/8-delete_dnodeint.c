#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index of a list
 * @head: Address of pointer to first node in the list.
 * @index: Index of node to be deleted.
 *
 * Return: 1 if successful, else -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int idx = 0;

	if (*head == NULL) /* Check if list is empty */
		return (-1);

	if (index == 0)
	{ /* Delete first node if index is 0 */
		curr = curr->next;
		free(*head);
		curr ? curr->prev = NULL : NULL;
		*head = curr;
		return (1);
	}

	while (curr)
	{
		if (idx == index)
		{ /* Find the node that is currently at the index */
			curr->prev->next = curr->next;
			if (curr->next)
				curr->next->prev = curr->prev;
			free(curr);
			return (1);
		}

		curr = curr->next;
		idx++;
	}

	return (-1);
}
