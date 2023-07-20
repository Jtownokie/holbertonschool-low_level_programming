#include "lists.h"

/**
 * *insert_dnodeint_at_index - Function that adds a node at an index
 * @h: list to add node to
 * @idx: Index to add node at
 * @n: Data to initialize new node
 *
 * Return: Pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int node_at_index = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *h;

	while (current->next != NULL && node_at_index != idx)
	{
		current = current->next;
		node_at_index++;
	}

	if (node_at_index != index)
		return (NULL);

	new_node->next = current;
	new_node->prev = current->prev;
	current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
