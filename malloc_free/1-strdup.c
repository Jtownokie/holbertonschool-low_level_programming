#include "main.h"
#include "strlen.c"

/**
 * *_strdup - Function that returns a pointer to copy of string
 * @str: String to copy
 *
 * Return: Pointer to the new mem space, or NULL if str is NULL or if it fails
 */

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc((_strlen(str) + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < _strlen(str); i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';

	return (copy);
}
