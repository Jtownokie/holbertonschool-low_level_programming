#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; ch <= 'Z'; ch++)
	{
		putchar(CH);
	}
	putchar('\n');

	return (0);
}
