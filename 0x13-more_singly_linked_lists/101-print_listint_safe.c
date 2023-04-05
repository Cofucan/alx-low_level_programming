#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

const listint_t **_realloc(const listint_t **arr, size_t size,
		const listint_t *new);

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: Pointer to the first node
 *
 * Return: Number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t **list = NULL;
	size_t i, nodes = 0;

	while (head)
	{
		for (i = 0; i < nodes; i++)
		{
			if (head == *(list + i))
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nodes);
			}
		}
		nodes++;
		list = _realloc(list, nodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nodes);
}

/**
 * _realloc - reallocates memory for an array of pointers to the
 *			  nodes in a linked list
 *
 * @arr: Initial array to append
 * @size: size of the new array (always one more than the old array)
 * @new: new node to add to the array
 *
 * Return: Pointer to the new array
 */

const listint_t **_realloc(const listint_t **arr,
		size_t size, const listint_t *new)
{
	const listint_t **new_arr;
	size_t i;

	new_arr = malloc(size * sizeof(listint_t *));
	if (!new_arr)
	{
		free(arr);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		new_arr[i] = arr[i];

	new_arr[i] = new;
	free(arr);

	return (new_arr);
}
