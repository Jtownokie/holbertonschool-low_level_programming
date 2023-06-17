#include "main.h"
#include <stdlib.h>

/**
 * main - Program that adds numbers passed to main
 * @argc: Number of arguments passed to program
 * @argv: Array of string arguments passed to program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(argv[i] >= '0' && argv[i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
