#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Pointer to the first node
 *
 * Return: Data from the deleted node.
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_pop;
	int data;

	/* If list is empty, then there's nothing to free */
	if (!(*head))
		return (0);

	/* Get the node that needs to be removed */
	node_to_pop = *head;

	/* Get the data from that node */
	data = (*head)->n;

	/* Head should now point to the next node */
	*head = (*head)->next;

	/* Free the node to be removed */
	free(node_to_pop);

	return (data);
}
