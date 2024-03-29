#include "lists.h"

/**
 * free_listint - Function that frees a list
 * @head: list to free
 *
 * Return: Always void
 */

void free_listint(listint_t *head)
{
	listint_t *currentnode = head;

	if (head == NULL)
		return;

	while (currentnode != NULL)
	{
		listint_t *next = currentnode->next;

		free(currentnode);

		currentnode = next;
	}
}
