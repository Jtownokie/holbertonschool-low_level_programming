#include "main.h"

/**
 * _strlen - string length
 * @s: Pointer input
 *
 * Return: Always void
 */
int _strlen(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	return (j);
}
