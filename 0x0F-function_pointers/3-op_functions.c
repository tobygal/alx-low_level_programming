#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: an integer
 * @b: an integer
 * Return: sum of the two integers
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - substract b from a
 * @a: an integer
 * @b: an integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

/**
 * op_mul - multiply two numbers
 * @a: an integer
 * @b: an integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	int pro;

	pro = a * b;
	return (pro);
}

/**
 * op_div - divide two numbers
 * @a: the numerator
 * @b: the denominator
 * Return: result of the division
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - reminder of division of a by b
 * @a: an integer
 * @b: an integer
 * Return: modolus of a to b
 */

int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
