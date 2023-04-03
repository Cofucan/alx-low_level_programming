#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * add_nodeint - adds a new node at the beginning of a singly-linked list
 * @head: Address of pointer to the first node
 * @n: Property to set for new node after declaration
 *
 * Return: Address of the new node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
