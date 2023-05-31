#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: Integer input
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int num;
	int i;
	int j;

	num = n;

	if (num < 98)
	{
		for (i = num; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (num == 98)
	{
		printf("%d\n", num);
	}
	else if (num > 98)
	{
		for (j = num; j >= 98; j--)
		{
			if (j > 98)
			{
				printf("%d, ", j);
			}
			else if (j == 98)
			{
				printf("%d\n", j);
			}
		}
	}
}
