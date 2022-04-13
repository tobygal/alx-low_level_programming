#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to an array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to a function
 * Return: the first index of integer or -1 if not an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
