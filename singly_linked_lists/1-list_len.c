#include "lists.h"

/**
 * list_len - Function that returns the number of elements of a list
 * @h: Pointer to list_t list
 *
 * Return: Number of Elements
 */

size_t list_len(const list_t *h)
{
	size_t num_elements = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		num_elements++;
		current_node = current_node->next;
	}

	return (num_elements);
}
