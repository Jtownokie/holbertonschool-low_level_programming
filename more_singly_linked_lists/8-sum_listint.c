#include "lists.h"

/**
 * sum_listint - Sum of data in nodes
 * @head: Head of list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
