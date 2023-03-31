#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: Pointer to the first node
 * @str: String to be copied and assigned in the new node
 *
 * Return: Address of the new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *node;
	list_t *curr = (*head);

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	for (len = 0; str[len]; len++)
	{};

	/* If head pointer is not null */
	if (curr)
	{
		/* Traverse the list up to the last element */
		while (curr->next)
			curr = curr->next;

		/* The last node should now point to the new node */
		curr->next = node;
	}
	else
	{
		/* Head pointed to null, head should now point to new node */
		*head = node;
	}

	/* Copy the string to new location and get the address */
	node->str = strdup(str);
	/* Store the length of the string */
	node->len = len;
	/* The new node should point to null since its the last element */
	node->next = NULL;

	return (node);
}

