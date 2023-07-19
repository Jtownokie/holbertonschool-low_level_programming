#include "lists.h"

/**
 * *add_dnodeint_end - Function that adds a new node at the end of a list
 * @head: Double pointer to head
 * @n: Data to enter into new node
 *
 * Return: Number of Nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	dlistint_t *last = *head;

	new_node->n = n;
	new_node->next = NULL

	if (*head != NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node

	new_node->prev = last;

	return (new_node);
}
