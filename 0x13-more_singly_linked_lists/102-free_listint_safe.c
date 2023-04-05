#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

listint_t **_real(listint_t **arr, size_t size, listint_t *new);

/**
 * free_listint_safe - frees a linked list.
 * @head: Address of pointer to the first node
 *
 * Return: Number of nodes in the list.
 */

size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **arr = NULL;
	listint_t *next;

	if (!head || !(*head))
		return (num);

	while (*head)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == arr[i])
			{
				*head = NULL;
				free(arr);
				return (num);
			}
		}
		num++;
		arr = _real(arr, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(arr);
	return (num);
}

/**
 * _real - reallocates memory for an array of pointers to the
 *		   nodes in a linked list
 *
 * @arr: Initial array to append
 * @size: size of the new array (always one more than the old array)
 * @new: new node to add to the array
 *
 * Return: Pointer to the new array
 */

listint_t **_real(listint_t **arr, size_t size, listint_t *new)
{
	listint_t **new_arr;
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
