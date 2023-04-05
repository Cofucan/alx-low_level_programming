#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * reverse_listint - reverses a linked list
  * @head: Pointer to the first node
  *
  * Return: Pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		next = *head;
		*head = (*head)->next;
		next->next = prev;
		prev = next;
	}

	*head = prev;

	return (*head);
}
