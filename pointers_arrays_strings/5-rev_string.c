#include "main.h"

/**
 * rev_string - Reverse String Function
 * @s: Pointer input
 *
 * Return: Always void
 */
void rev_string(char *s)
{
	char *str;
	int len = 0;
	int rev;

	for (*str = s[0]; *str != '\0'; str++)
	{
		len++
	}

	len = len - 1;

	for (i = len; i >= 0; i--)
	{
		for (j = 0; j <= len; j++)
		{
			s[j] = s[i];
		}
	}
}
