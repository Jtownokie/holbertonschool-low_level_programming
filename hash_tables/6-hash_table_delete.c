#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: Table to delete
 *
 * Return: Always Void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (current = ht->array[index]; current; current = next)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
