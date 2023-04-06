#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * reverse_listint - reverses a linked list
  * @head: Pointer to the first node
  *
  * Psuedocode is in readme doc.
  *
  * Return: Pointer to the first node of the reversed list.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
