#include "hash_tables.h"
#include <string.h>


/**
 * hash_table_get - Gets the value associated with a key from the hash table.
 * @ht: The hash table to find the key in.
 * @key: The key to be found on the hash table.
 *
 * Return: The value associated with the key, or NULL if key was not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ht_pair;
	unsigned long int index;
	hash_node_t *ht_slot;
	char *update_value;

	/* Get the key index and the node at that index */
	index = key_index((unsigned char *)key, ht->size);
	ht_pair = ht->array[index];

	/* Iterate over the linked list until the key is found */
	while (ht_pair)
	{
		if (strcmp(ht_pair->key, key) == 0)
			return (ht_pair->value);
		ht_pair = ht_pair->next;
	}
	return (NULL);
}
