#include "hash_tables.h"

/**
 * hash_table_get - Gets the value associated with a key from the hash table.
 * @ht: The hash table to find the key in.
 * @key: The key to be found on the hash table.
 *
 * Return: The value associated with the key, or NULL if key was not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ht_bucket;
	unsigned long int index;

	if (!ht || !key || !(*key))
		return (NULL);

	/* Get the key index and the node at that index */
	index = key_index((unsigned char *)key, ht->size);
	ht_bucket = ht->array[index];

	/* Iterate over the linked list until the key is found */
	while (ht_bucket)
	{
		if (strcmp(ht_bucket->key, key) == 0)
			return (ht_bucket->value);
		ht_bucket = ht_bucket->next;
	}
	return (NULL);
}
