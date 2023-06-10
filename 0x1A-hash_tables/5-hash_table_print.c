#include "hash_tables.h"

void print_bucket(hash_node_t *ht_bucket, char *format);

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ht_bucket;
	int first_found = 0;
	unsigned int u;

	if (ht == NULL)
		return;

	putchar('{');
	for (u = 0; u < ht->size; ++u)
	{
		ht_bucket = ht->array[u];
		if (ht_bucket)
		{
			if (!first_found)
			{
				print_bucket(ht_bucket, "'%s': '%s'");
				first_found = 1;
			}
			else
				print_bucket(ht_bucket, ", '%s': '%s'");
		}
	}
	printf("}\n");
}

/**
 * print_bucket - Prints a hash table bucket (linked-list).
 * @ht_bucket: The linked-list to be printed.
 * @format: The format with which to print the elements.
 *
 * Return: Nothing.
 */
void print_bucket(hash_node_t *ht_bucket, char *format)
{
	while (ht_bucket)
	{
		printf(format, ht_bucket->key, ht_bucket->value);
		ht_bucket = ht_bucket->next;
	}
}
