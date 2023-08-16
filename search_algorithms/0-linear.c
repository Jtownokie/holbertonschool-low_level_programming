#include "search_algos.h"

/**
* linear_search - Linear search algorithm
* @array: Pointer to array
* @size: Size of the array
* @value: Value to search for
*
* Return: 0 if success or else -1
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %u\n", array[i], i);
			return (i);
		}
	}
	return (-1);
}
