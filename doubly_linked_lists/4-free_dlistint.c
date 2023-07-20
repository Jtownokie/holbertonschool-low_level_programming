#include "lists.h"

/**
 * free_dlistint - Function that frees a list
 * @head: List to Free
 *
 * Return: Always Void
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
