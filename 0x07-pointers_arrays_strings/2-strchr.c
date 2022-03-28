#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to the first occurence of a specified character
 * @c: the character to be located
 * Return: either return a pointer to c or null
 */

char *_strchr(char *s, char c)
{
	int j;
	char str[] = "";

	j = 0;

	while (str[j] != '\0')
	{
		if (str[j] == c)
		{
			return (s);
		}

		j++;

	}
	return ('\0');
}
