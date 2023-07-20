#include "lists.h"

/**
 * sum_dlistint - Function that returns sum of all data of a list
 * @head: List to check
 *
 * Return: Sum of all data of a list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
