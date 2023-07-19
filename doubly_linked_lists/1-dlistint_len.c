#include "lists.h"

/**
 * dlistint_len - Function that returns num of elements in list
 * @h: Pointer to dlistint_t list
 *
 * Return: Number of Nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		num_elements++;
		current_node = current_node->next;
	}
	return (num_elements);
}
