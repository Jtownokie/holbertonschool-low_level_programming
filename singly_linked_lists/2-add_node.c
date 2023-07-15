#include "lists.h"

/**
 * *add_node - Function that adds a new node at the beginning of a list
 * @head: List to add new node to
 * @str: String to initialize new node data
 *
 * Return: Pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(*str);
	new_node->next = *head;

	head = &new_node->next;

	return (head);
}
