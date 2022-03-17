#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: determines length of line
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		a = 1;
		while (a <= n)
		{
			b = 1;
			while (b <= a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	_putchar('\n');
}

