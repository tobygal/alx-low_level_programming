#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of char and initialize wit a specific char
 * @size: size of array
 * @c: char to be displayed
 * Return: return Null or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
	free(ptr);
}
