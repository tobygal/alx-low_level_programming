#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always return 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (1);
	}
	return (0);

}
