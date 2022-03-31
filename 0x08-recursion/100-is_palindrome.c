#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculate the length of a string
 * @s: a char pointer
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * get_palindrome - check if the string is the same when reversed
 * @s: the string to be checked
 * @i: the index of the string
 * @len: the length of the string
 * Return: 1 if a palindrome, 0 if not a palindrome
 */

int get_palindrome(char *s, int i, int len);

int get_palindrome(char *s, int i, int len)
{
	if (s[i] != s[len - 1 - i])
	{
		return (0);
	}
	else if (i == (len / 2))
	{
		return (1);
	}
	return (get_palindrome(s, (i + 1), len));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: the function get_palindrome
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s);

	return (get_palindrome(s, i, len));
}
