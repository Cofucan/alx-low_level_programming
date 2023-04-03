#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * add_nodeint - adds a new node at the beginning of a singly-linked list
 * @h: Pointer to the first node
 *
 * Return: Address of the new node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	const listint_t *curr = *head;
	listint_t *node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
