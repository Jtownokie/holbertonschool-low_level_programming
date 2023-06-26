#include "main.h"

/**
 * *array_range - Function that creates an array of integers
 * @min: Min Value
 * @max: Max Value
 *
 * Return: Pointer to the array, or NULL if size is 0 or if it fails
 */

int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	j = min;
	for (i = 0; i < ((max - min) + 1); i++)
	{
		array[i] = j;
		j++;
	}

	return (array);
}
