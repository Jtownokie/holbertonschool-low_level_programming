#include "main.h"

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb: Number of elements
 * @size: of Size bytes
 *
 * Return: Pointer to the array, or NULL if size is 0 or if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i:
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < nmemb * size)
	{
		array[i] = 0;
		i++;
	}

	return (array);
}
