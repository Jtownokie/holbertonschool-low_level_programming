#include "main.h"
#include "strlen.c"

/**
 * *string_nconcat - Function that returns a pointer to concatenated string
 * @s1: Source String
 * @s2: String to Concatenate
 * @n: Number of bytes to add
 *
 * Return: Pointer to the new mem space, or NULL if str is NULL or if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *new_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
		new_string = malloc(((_strlen(s1) + _strlen(s2)) + 1) * sizeof(char));
	else
		new_string = malloc(((_strlen(s1) + n) + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	i = 0;
	while (*s1 != '\0')
		new_string[i] = *s1;
		s1++;
		i++;

	j = 0;
	while (*s2 != '\0' && j < n)
		new_string[i] = *s2;
		s2++;
		i++;
		j++;
	new_string[i] = '\0';

	return (new_string);
}
