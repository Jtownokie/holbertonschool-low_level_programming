#include "search_algos.h"
/**
* binary_search - search for a value using a binary search algorithm
* @array: array to be searched
* @size: size of the array
* @value: value to be searched for
* Return: 0 or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int min = 0;
	int max = size - 1;
	int mid, i;

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i < max; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);

		mid = (min + max) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			min = mid + 1;
		else
			max = mid - 1;
	}
	return (-1);
}
