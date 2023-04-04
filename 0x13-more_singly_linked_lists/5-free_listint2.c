#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * free_listint2 -	frees a list of dynamically allocated structs
 *					and sets the head to null.
 * @head: Pointer to the first node
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;

	/* If head points to null, then there's nothing to free */
	if (!(*head))
		return;

	prev = *head;
	curr = *head;

	while (curr)
	{
		curr = curr->next;
		free(prev);
		prev = curr;
	}

	/* Set head to null after freeing all the nodes */
	*head = NULL;
}
