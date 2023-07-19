#include "lists.h"

/**
 * *add_dnodeint - Function that adds a new node at the beginning of a list
 * @head: Double pointer to head
 * @n: Data to enter into new node
 *
 * Return: Number of Nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		*head->prev = new_node;

	*head = new_node;

	return (new_node);
}
