#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: List to free
 *
 * Return: Always Void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (next = (*head)->next; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
