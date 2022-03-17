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
		z = 0;
		while (size > z)
		{
			for (q = 0; q < size; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
			z++;
		}
	}
	_putchar('\n');
}
