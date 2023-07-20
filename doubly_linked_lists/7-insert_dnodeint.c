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
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	current = *h;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = new_node;
		else
		{
			new_node->next = *h;
			current->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
