#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * add_node - adds a node to the front of the list
 * @head: Pointer to the first node
 * @str: String to be copied and assigned in the new node
 *
 * Return: Address of the new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	for (len = 0; str[len]; len++)
	{};

	/* Copy the string to new location and get the address */
	node->str = strdup(str);
	/* Store the length of the string */
	node->len = len;
	/* The new node should point to the first node  in the list */
	node->next = &(**head);

	/* The head should now point to the new node */
	*head = node;

	return (node);
}
