#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters to uppercase
 * @str: String Input
 *
 * Return: Pointer to Uppercased String
 */

char *string_toupper(char *str)
{
	int i = 0;
	char *temp;

	temp = str;

	while (*str != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		str++;
		i++;
	}
	return (temp);
}
