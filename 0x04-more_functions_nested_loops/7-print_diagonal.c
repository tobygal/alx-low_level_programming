#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: determines length of line
 */

void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		while (a <= n)
		{
			_putchar('\\');
			a++
		}
	}
	_putchar('\n');
}

