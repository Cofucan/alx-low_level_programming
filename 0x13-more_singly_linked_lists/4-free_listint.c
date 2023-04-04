#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * free_listint - frees a list of dynamically allocated structs
 * @head: Pointer to the first node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *prev = head;

	/* If head points to null then there's nothing to free */
	if (!head)
		return;

	while (curr)
	{
		/* Go to the next node */
		curr = curr->next;

		/* Free the previous node */
		free(prev);

		/* Current node should now become the previous node */
		prev = curr;
	}
}
