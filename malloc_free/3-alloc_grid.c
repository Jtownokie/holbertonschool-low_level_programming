#include "main.h"

/**
 * **alloc_grid - Function that returns a pointer to a 2D Array
 * @width: Width of Array
 * @height: Height of Array
 *
 * Return: Pointer to 2D Array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc((width * height) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i * width + j] = 0;
		}
	}

	return (array);
}
