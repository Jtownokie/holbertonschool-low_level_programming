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
	char **temp;
	unsigned int i;

	while (*s)
	{
		if (*s == c)
		{
			temp = s;
			break;
		}
		else
		{
			temp = NULL;
		}
		s++
	}

	return (temp);
}
