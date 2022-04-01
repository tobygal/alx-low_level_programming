#include <stdio.h>
#include <stdlib.h>

/**
 * main: entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: return 1
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	if (amount >= 25)
	{
		count += amount / 25;
		amount = amount % 25;
	}
	if (amount < 25 && amount >= 10)
	{
		count += amount / 10;
		amount = amount % 10;
	}
	if (amount < 10 && amount >= 5)
	{
		count += amount / 5;
		amount = amount % 5;
	}
	if (amount < 5 && amount >= 2)
	{
		count += amount / 2;
		amount = amount % 2;
	}
	if (amount < 2 && amount >= 1)
	{
		count += amount / 1;
	}
	printf("%d\n", count);
	return (0);	

}
