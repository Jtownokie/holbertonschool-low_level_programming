#include "main.h"

/**
 * main - Program that prints all arguments passed to it
 * @argc: Number of arguments passed to program
 * @argv: Array of string arguments passed to program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
