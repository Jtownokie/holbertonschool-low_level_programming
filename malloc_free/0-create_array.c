#include "main.h"

/**
 * *create_array - Function that creates an array of chars
 * @size: Size of Array
 * @c: Character to initialize array with
 *
 * Return: Pointer to the array, or NULL if size is 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
