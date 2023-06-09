#include "main.h"

/**
 * reverse_array - Function that reverses an array
 * @a: Array Pointer Input
 * @n: Array Length
 *
 * Return: Always Void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int tmp[n];

	while (i < n)
	{
		tmp[i] = *a[i];
		i++;
	}

	while (j < n)
	{
		*a[j] = tmp[i];
		j++;
		i--;
	}
}
