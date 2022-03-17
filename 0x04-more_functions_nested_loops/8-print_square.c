#include "main.h"

/**
 * print_square - prints square using #
 * @size: the size of the square
 */

void print_square(int size)
{
	int z;
	int q;

	if (size > 0)
	{
		z = 1;
		while (size >= z)
		{
			for (q = 1; q <= size; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
			z++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
