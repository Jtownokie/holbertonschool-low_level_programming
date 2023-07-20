#include "lists.h"

/**
 * *get_dnodeint_at_index - Function that returns nth node of a list
 * @head: List to check
 * @index: Index to check
 *
 * Return: Pointer to nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int node_at_index = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current->next != NULL && node_at_index != index)
	{
		current = current->next;
		node_at_index++;
	}

	if (node_at_index != index)
		return (NULL);

	return (current);
}
