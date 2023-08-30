#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be returned
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
