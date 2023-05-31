#include "main.h"

/**
 * _isupper - Checks if input is uppercase
 * @c: Input Integer
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	int letter;

	letter = c;

	if (isupper(letter))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

