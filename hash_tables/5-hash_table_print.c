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
	hash_node_t *current_node;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (current_node = ht->array[index]; current_node; current_node = current_node->next)
		{
			if (first)
			{
				printf("'%s': '%s'", current_node->key, current_node->value);
				first = 0;
			}
			else
			{
				printf(", '%s': '%s'", current_node->key, current_node->value);
			}
		}
	}
	printf("}\n");
}
