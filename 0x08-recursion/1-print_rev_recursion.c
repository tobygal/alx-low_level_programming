#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - dispay a string in reverse
 * @s: pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		write(1, &*s, 1);
	}
}
