#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * free_list - frees a dynamically allocated linked list
 * @head: Pointer to the first node
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *prev = head;

	/* If head points to null then there's nothing to free */
	if (!head)
		return;

	while (curr)
	{
		/* Go to the next node */
		curr = curr->next;
		/* Free the prevoius node's string's memory */
		free(prev->str);
		/* Free the previous node itself */
		free(prev);
		/* Current node should now become the previous node */
		prev = curr;
	}
}
