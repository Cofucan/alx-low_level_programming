#include "hash_tables.h"

/**
 * key_index - Computes the index at which a key should be placed
 *			   on the hash table array.
 * @key: The key to be hashed and placed on the array.
 * @size: Size of the hash table array.
 *
 * Return: The index of the key on the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
