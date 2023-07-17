#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: list to free
 *
 * Return: Always void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
