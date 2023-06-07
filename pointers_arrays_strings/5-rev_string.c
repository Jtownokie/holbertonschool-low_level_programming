#include "main.h"

/**
 * rev_string - String Reverse Function
 * @s: Pointer input
 *
 * Return: Always void
 */
void rev_string(char *s)
{
	int i, j, k, l;
	char *tmp;

	j = 0;
	for (i = 0; s[i] != '\0' ; i++)
	{
		tmp[i] = s[i];
		j++;
	}

	j = (j - 1);

	for (k = 0; k <= j; k++)
	{
		for (l = j; l >= 0; l++)
		{
			s[k] = tmp[l];
		}
	}
}
