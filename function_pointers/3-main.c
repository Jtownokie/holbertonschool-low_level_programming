#include "3-calc.h"

/**
 * main - Main Function of Calc Program
 * @argc: Num arguments
 * @argv: Array of argument strings
 *
 * Return: Always void
 */

int main(int argc, char **argv)
{
	char *getop;
	int num1, num2, result;
	int (*opfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	getop = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*getop == '/' || *getop == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	opfunc = get_op_func(getop);
	result = opfunc(num1, num2);

	printf("%d\n", result);

	return (0);
}
