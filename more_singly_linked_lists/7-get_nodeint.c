#include "lists.h"

/**
 * get_nodeint_at_index - Get data at index
 * @head: Head of list
 * @index: Index to check
 *
 * Return: Pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			head = head->next;
		}
	}
	return (head);
}
