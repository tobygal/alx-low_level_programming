#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - makes a copy of a string in a new space in memory
 * @str: the string to be copied
 * Return: return NULL if NULL otherwise Pointer to the string
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str != '\0')
	{
		ptr = (char *)malloc(sizeof(char) * i++);
		ptr[n - 1] = str;
	}
	return (ptr);
	free(ptr);
}
