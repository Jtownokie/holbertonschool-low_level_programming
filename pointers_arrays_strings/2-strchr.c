#include "main.h"

/**
 * *_strchr - Locates character in string
 * @s: String to check
 * @c: Character to locate
 *
 * Return: Pointer to first occurrence of character
 */

char *_strchr(char *s, char c)
{
	char *temp = s;

	do {
		if (*s == c)
		{
			return (temp);
		}
	} while (*s++);

	return (NULL);
}
