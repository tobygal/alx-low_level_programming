#include <stdio.h>

/**
 * main - The entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: argc
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
