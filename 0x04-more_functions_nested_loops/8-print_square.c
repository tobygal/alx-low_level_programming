#include "main.h"

/**
 * print_square - prints square using #
 * @size: the size of the square
 */

void print_square(int size)
{
	int z;

	if (size > 0)
	{
		z = 1;
		while (size >= z)
		{
			_putchar('#');
			z++
		}
	}
	_putchar('\n');
}
