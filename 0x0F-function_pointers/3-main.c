#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	i = atoi(argv[1]);
	op = (argv[2]);
	j = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(i, j));
	return (0);
}
