#include "main.h"

/**
 * add - Sum two integers
 *
 * @a: first number
 * @b: second number
 * Return: return 0
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * mul - function to multiply two integers
 * @a: The first integer to be multiplied
 * @b: The second integer to be multiplied
 * Return: return the product
 */

int mul(int a, int b)
{
	int prd;

	prd = a * b;

	return (prd);
}

/**
 * sub - substract integers
 *
 *
 * @a: first number
 * @b: second number
 * Return: return 0
 */

int sub(int a, int b)
{
	int dif;

	dif = a - b;
	return (dif);
}

/**
 * div - divide two integers
 *
 * @a: first number
 * @b: second number
 * Return: return 0
 */

int div(int a, int b)
{
	int quo;

	quo = a / b;
	return (quo);
}

/**
 * mod - reminder of division of two numbers
 *
 * @a: first number
 * @b: second number
 * Return: return 0
 */

int mod(int a, int b)
{
	int rem;

	rem = a % b;
	return (rem);
}
