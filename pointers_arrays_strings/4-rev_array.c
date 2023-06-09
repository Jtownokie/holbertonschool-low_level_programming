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
	int tmp[15];

	while (i < n)
	{
		tmp[i] = a[i];
		i++;
	}

	for (i = 0; i < n; i++)
	{
		a[i] = tmp[n - i - 1];
	}
}
