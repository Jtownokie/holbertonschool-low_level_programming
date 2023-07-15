#include "lists.h"

/**
 * free_list - Function that frees all elements of a list
 * @head: head pointer to list
 *
 * Return: Always void
 */

void free_list(list_t *head)
{
	list_t *current_node = head;

	while (current_node != NULL)
	{
		free(current_node->str);
		free(current_node);
		current_node = current_node->next;
	}
}
