#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes a node at an index
 * @head: List to check
 * @index: nth node to delete
 *
 * Return: 1 if Success, -1 if Failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int node_at_index = 0;

	if (head == NULL)
		return (-1);

	current = *head;

	while (current->next != NULL && node_at_index != index)
	{
		current = current->next;
		node_at_index++;
	}

	if (node_at_index != index)
		return (-1);

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);

	return (1);
}
