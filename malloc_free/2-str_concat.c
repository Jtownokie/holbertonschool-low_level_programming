#include "main.h"
#include "strlen.c"

/**
 * *str_concat - Function that returns a pointer to concatenated string
 * @s1: Source String
 * @s2: String to Concatenate
 *
 * Return: Pointer to the new mem space, or NULL if str is NULL or if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *new_string;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	new_string = malloc(((_strlen(s1) + _strlen(s2)) + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*s1 != '\0')
	{
		*new_string[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		*new_string[i] = *s2;
		s2++;
		i++;
	}
	*new_string[i] = '\0';

	return (new_string);
}
