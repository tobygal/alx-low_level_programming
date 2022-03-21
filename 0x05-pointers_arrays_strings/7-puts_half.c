#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string value
 * Return: 0
 */

void puts_half(char *str)
{
	int count = 0, j;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}

	if (count % 2 == 0)
	{
		j = count / 2;
	}
	else
	{
		j = (count - 1) / 2;
	}
	for (j++; j < count; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
