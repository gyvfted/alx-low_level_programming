#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: check char for  ascii
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	return (0);
}
