#include "hash_tables.h"

/**
 * *hash_table_get - Function that returns value from key
 * @ht: hash table to check
 * @key: key to check
 *
 * Return: value at key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_at_index;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node_at_index = ht->array[index];

	while (node_at_index)
	{
		if (strcmp(node_at_index->key, key) == 0)
		{
			return (node_at_index->value);
		}
		node_at_index = node_at_index->next;
	}
	return (NULL);
}
