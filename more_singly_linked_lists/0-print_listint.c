#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: List to print
 *
 * Return: Num of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
