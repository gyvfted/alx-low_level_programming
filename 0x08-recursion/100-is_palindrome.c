#include "main.h"

/**
 * _strlen_recursion -  Returns the length of a string
 * @s: The string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
	}
		return (length);
}

/**
 * palindrome - Checks the characters recursively for palindrome
 * @str: The string
 * @a: Direct imdex
 * @b: Reverse index
 * Return: 1 if s is palindrome and 0 otherwise
 */

int palindrome(char *str, int a, int b)
{
	if (str[a] == str[b])
	{
		if (a <= b / 2)
			return (palindrome(str, a + 1, b - 1));
		return (1);
	}
	else
		return (0);
}

/**
 * is_palindrome - Checks the characters recursively for palindrome
 * @s: The string
 * Return: 1 if n is prime and 0 otherwise
 */

int is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen_recursion(s) - 1));
}
