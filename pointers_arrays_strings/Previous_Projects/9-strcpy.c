#include "main.h"

/**
 * _strcpy - Copies string
 *
 * @dest: destination
 * @src: string to copy
 *
 * Return: Char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
