#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to a hash table
 * @ht: Table to manipulate
 * @key: Key to match to value
 * @value: Value to match with key
 *
 * Return: 1 if Success, 0 if Failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *hash_node, *new_node;

	if (*key == '\0' || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	hash_node = ht->array[index];

	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			hash_node->value = strdup(value);
			return (1);
		}
		hash_node = hash_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
