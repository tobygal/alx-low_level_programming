#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function to select the correct function to perform
 * operation asked by user
 * @s: pointer to a string
 * Return: return the return value of the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 6)
	{
		if (*s == *(ops[i].op))
			break;
		i++;
	}
	return (ops[i].f);
}
