#include "main.h"
#include <stdlib.h>

/**
 * main - Program that prints all arguments passed to it
 * @argc: Number of arguments passed to program
 * @argv: Array of string arguments passed to program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = 1;
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}

	return (0);
}
