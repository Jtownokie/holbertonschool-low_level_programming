#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: Pointer to list_t list
 *
 * Return: Number of Nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_elements = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
			num_elements++;
			current_node = current_node->next;
		}
		else
		{
			printf("[%u] %s\n", current_node->len, current_node->str);
			num_elements++;
			current_node = current_node->next;
		}
	}
	return (num_elements);
}
