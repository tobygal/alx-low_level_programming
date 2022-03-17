#include "main.h"

/**
 * print_line - draw a straight line
 * @n: determines the lenght of the line
 */

void print_line(int n)
{
	int z;

	if (n > 0)
	{
		z = 1;
		while (z <= n)
		{
			_putchar('_');
			z++;
		}
	}
	_putchar('\n');
}
