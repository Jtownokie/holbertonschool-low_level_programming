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
	int j;
	int len = 0;
	char *temp;

	temp = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 'a' + 'A';
		}
	}

	return (temp);
}
