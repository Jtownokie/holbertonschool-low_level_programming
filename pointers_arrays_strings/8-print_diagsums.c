#include "main.h"

/**
 * print_diagsums - Prints sum of both diagonals
 * @a: array of size 'size'
 * @size: size of array
 *
 * Return: Always void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + (*a)[i][i];
		sum2 = sum2 + (*a)[i][size - i - 1];
	}

	printf("%d, %d\n", sum1, sum2);
}
