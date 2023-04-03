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
	listint_t *prev;

	if (!(head->next))
		return;

	prev = head;

	while (head)
	{
		head = head->next;
		free(prev);
		prev = head;
	}
}
