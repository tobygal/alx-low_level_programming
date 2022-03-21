#include "main.h"
#include <stdio.h>

/**
 * _puts - display a string
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\n'; c++)
	{
		_putchar(str[c]);
	}

	_putchar('\n');
	return (0);
}
