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
	int i, j, k, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		k = 0;
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[k];
			}
			if ((i + j) == (size - 1))
			{
				sum2 = sum2 + a[k];
			}
			k++
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
