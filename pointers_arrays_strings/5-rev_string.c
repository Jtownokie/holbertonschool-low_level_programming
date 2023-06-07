#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - String Reverse Function
 * @s: Pointer input
 *
 * Return: Always void
 */
void rev_string(char *s)
{
	int i;
	char temp;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		temp = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = temp;
	}
}
