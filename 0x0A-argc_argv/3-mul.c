#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: return 1 if error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}

