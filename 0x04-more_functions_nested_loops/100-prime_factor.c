#include <stdio.h>

/**
 * main - prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long int a, i;

	a = 612852475143;
	for (1 = 3; i < (a / 2); i = i + 2)
	{
		while ((a % i == 0) && (a != i))
		{
			a = a / i;
		}
		printf("%ul\n", a);
		return (0);
	}
