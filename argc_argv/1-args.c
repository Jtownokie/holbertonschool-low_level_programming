#include "main.h"

/**
 * main - Program that prints number of arguments passed to it
 * @argc: Number of arguments passed to program
 * @argv: Array of string arguments passed to program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
