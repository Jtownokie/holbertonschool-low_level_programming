#include "main.h"
#include "_isalpha.c"
#include "_isdigit.c"

/**
 * *cap_string - Function that Capitalizes the first letter of every word
 * @str: String Input
 *
 * Return: Pointer to Uppercased String
 */

char *cap_string(char *str)
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
		if (_isalpha(str[j]) == 0 && str[j] != '-' && _isdigit(str[j]) == 0)
		{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
			{
				str[j + 1] = str[j + 1] - 'a' + 'A';
			}
		}
	}

	return (temp);
}
