#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: Table to print
 *
 * Return: Always Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (current = ht->array[index]; current; current = current->next)
		{
			if (first)
			{
				printf("'%s': '%s'", current->key, current->value);
				first = 0;
			}
			else
			{
				printf(", '%s': '%s'", current->key, current->value);
			}
		}
	}
	printf("}\n");
}
