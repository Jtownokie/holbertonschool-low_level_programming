#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: Pointer to list_t list
 *
 * Return: Number of Nodes
 */

size_t print_list(const list_t *h)
{
	size_t numelements = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			numelements++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			numelements++;
		}
	}
	return (numelements);
}
