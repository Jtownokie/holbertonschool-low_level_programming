#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters to uppercase
 * @str: String Input
 *
 * Return: Pointer to Uppercased String
 */

char *string_toupper(char *str)
{
	int i;
	int len = 0;
	char *temp;

	temp = str;

	while (*str)
	{
		len++;
	}

	len = len - 1;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}

	return (temp);
}
