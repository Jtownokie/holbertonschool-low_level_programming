#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: Pointer to dlistint_t list
 *
 * Return: Number of Nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_elements = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		num_elements++;
		current_node = current_node->next;
	}
	return (num_elements);
}
