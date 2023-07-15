#include "lists.h"

/**
 * *add_node_end - Function that adds a new node at the end of a list
 * @head: Pointer to head pointer to List to add new node to
 * @str: String to initialize new node data
 *
 * Return: Pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new_node);
}
