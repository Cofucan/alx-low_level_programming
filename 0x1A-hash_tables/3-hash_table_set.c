#include "hash_tables.h"
#include <string.h>

void add_node_at_beginning(hash_node_t **head, hash_node_t *node);

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add the key-value pair to.
 * @key: The key to be hashed and placed on the array.
 * @value: The value to be assigned to that key.
 *
 * Return: 1 if success or 0 if failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ht_pair, **ht_slot;
	unsigned long int index;
	char *update_value;

	/* Get the index for the key and the address of the slot */
	index = key_index((unsigned char *)key, ht->size);
	ht_slot = &(ht->array[index]);

	/* If the key exists then just update the value */
	if (*ht_slot && strcmp((*ht_slot)->key, key) == 0)
	{
		update_value = malloc(strlen(value) + 1);
		if (update_value == NULL)
			return (0);
		free((*ht_slot)->value);
		(*ht_slot)->value = update_value;
		strcpy((*ht_slot)->value, value);
		return (1);
	}

	/* Allocate memory for the new key-value pair and handle errors */
	ht_pair = malloc(sizeof(hash_node_t));
	if (ht_pair == NULL)
		return (0);
	ht_pair->key = malloc(strlen(key) + 1);
	if (ht_pair->key == NULL)
	{
		free(ht_pair);
		return (0);
	}
	ht_pair->value = malloc(strlen(value) + 1);
	if (ht_pair->value == NULL)
	{
		free(ht_pair->key);
		free(ht_pair);
		return (0);
	}
	ht_pair->next = NULL;

	/* Copy the key and values to the newly allocated space */
	strcpy(ht_pair->key, key);
	strcpy(ht_pair->value, value);

	/* If the index is not taken, then place the new key-value pair there. */
	if (*ht_slot == NULL)
	{
		*ht_slot = ht_pair;
		return (1);
	}

	/* If code gets here then there is a collision. Add new node at start. */
	if (*ht_slot && strcmp((*ht_slot)->key, key) != 0)
		add_node_at_beginning(&(*ht_slot), ht_pair);

	return (1);
}

/**
 * add_node_at_beginning - Adds a new node at the start of the linked list.
 * @head: The first node of the singly-linked list.
 * @node: The new node to add (represents the key-value pair).
 *
 * Return: Nothing.
 */
void add_node_at_beginning(hash_node_t **head, hash_node_t *node)
{
	if (*head == NULL)
		*head = node;

	node->next = *head;
	*head = node;
}
