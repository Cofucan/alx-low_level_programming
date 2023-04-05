#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * find_listint_loop - Finds the loopin a linked list.
 * @head: Pointer to the first node.
 *
 * Return: Address of the node where the loop starts, else NULL.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	/* check if the linked list is empty or only contains one node */
	if (!head || !(head->next))
		return (NULL);

	/* initialize the two pointers to the first and second nodes in the list */
	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	/**
	 * traverse the linked list until a loop is detected
	 * or the end of the list is reached
	 */
	while (fast_ptr)
	{
		/* if the two pointers meet, a loop is detected */
		if (slow_ptr == fast_ptr)
		{
			/* set the slow pointer to the beginning of the list */
			slow_ptr = head;
			/**
			 * traverse the list again with both pointers until
			 * they meet at the beginning of the loop
			 */
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			/* return the node where the loop starts */
			return (slow_ptr);
		}
		/* move the two pointers along the list at different speeds */
		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}
	/* no loop was detected */
	return (NULL);
}
