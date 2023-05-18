#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: Pointer to first node in the list.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *prev = head;

	if (!head)
		return;

	while (curr->next)
	{
		curr = curr->next;
		free(prev);
		prev = curr;
	}
	free(curr);
}
