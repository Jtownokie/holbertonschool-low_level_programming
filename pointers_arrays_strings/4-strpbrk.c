#include "main.h"

/**
 * *_strpbrk - Returns a pointer to the first occurrence in a string
 * @s: String to check
 * @accept: String to locate
 *
 * Return: Pointer to first occurrence of character
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = s;

	while (*s != '\0')
	{
		do {
			if (*accept == *s)
			{
				temp = accept;
				return (temp);
			}
		} while (*accept);
	}
	return (NULL);
}
