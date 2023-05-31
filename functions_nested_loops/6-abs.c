#include "main.h"

/**
 * _abs - Displays absolute value of entered int
 * @x: Integer input
 *
 * Return: Always 0
 */
int _abs(int x);
{
	int num;
	int reval;

	num = x;

	if (num < 0)
	{
		reval = num * -1;
	}
	else
	{
		reval = num;
	}
	return (reval);
}
