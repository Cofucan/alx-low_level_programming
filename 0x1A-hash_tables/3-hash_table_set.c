#include "hash_tables.h"
#include <string.h>

void add_node_at_beginning(hash_node_t **head, hash_node_t *node);

/**
 * hash_table_sssset - Adds an element to the hash table.
 * @ht: The hash table to add the key-value pair to.
 * @key: The key to be hashed and placed on the array.
 * @value: The value to be assigned to that key.
 *
 * Return: 1 if success or 0 if failure.
 */
int hash_table_sssset(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ht_pair, **ht_bucket;
	unsigned long int index;
	char *value_dup;

	/* Get the index for the key and the address of the slot */
	index = key_index((unsigned char *)key, ht->size);
	ht_bucket = &(ht->array[index]);

	/* If the key exists then just update the value */
	if (*ht_bucket && strcmp((*ht_bucket)->key, key) == 0)
	{
		value_dup = malloc(strlen(value) + 1);
		if (value_dup == NULL)
			return (0);
		free((*ht_bucket)->value);
		(*ht_bucket)->value = value_dup;
		strcpy((*ht_bucket)->value, value);
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
	if (*ht_bucket == NULL)
	{
		*ht_bucket = ht_pair;
		return (1);
	}

	/* If code gets here then there is a collision. Add new node at start. */
	if (*ht_bucket && strcmp((*ht_bucket)->key, key) != 0)
		add_node_at_beginning(&(*ht_bucket), ht_pair);

	return (1);
}

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
	hash_node_t *ht_pair, *ht_curr, **ht_bucket;
	unsigned long int index;
	char *value_dup;

	if (!ht || !key || !(*key) || !value)
		return (0);

	/* Get the index for the key and the address of the bucket */
	index = key_index((unsigned char *)key, ht->size);
	ht_bucket = &(ht->array[index]); /* Address of the linked-list head ptr */
	ht_curr = ht->array[index]; /* For iterating through a bucked list */

	/* Make a copy of the value string */
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	/* If the key exists then just update the value */
	while (ht_curr)
	{
		if (strcmp(ht_curr->key, key) == 0)
		{
			free(ht_curr->value);
			ht_curr->value = value_dup;
			return (1);
		}
		ht_curr = ht_curr->next;
	}

	/* Allocate memory for the new key-value pair and handle errors */
	ht_pair = malloc(sizeof(hash_node_t));
	if (ht_pair == NULL)
	{
		free(value_dup);
		return (0);
	}

	ht_pair->key = strdup(key);
	if (ht_pair->key == NULL)
	{
		free(value_dup);
		free(ht_pair);
		return (0);
	}

	ht_pair->value = value_dup;
	ht_pair->next = NULL;

	/* If the index is not taken, then place the new key-value pair there. */
	if (*ht_bucket == NULL)
	{
		*ht_bucket = ht_pair;
		return (1);
	}

	/* If code gets here then there is a collision. Add new node at start. */
	if (*ht_bucket && strcmp((*ht_bucket)->key, key) != 0)
		add_node_at_beginning(&(*ht_bucket), ht_pair);

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
