#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(1, &*s, 1);
		_puts_recursion(s + 1);
	}
	else
	{
		write(1, '\n', 1);
	}
}

