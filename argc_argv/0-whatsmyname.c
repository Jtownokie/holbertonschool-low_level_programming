#include "main.h"

/**
 * main - Program that prints its' own name
 * @argc: Number of arguments passed to program
 * @argv: Array of string arguments passed to program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	return (0);
}
