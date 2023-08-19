#include "main.h"

/**
 * _isdigit - checks for digits form 0 through to 9
 * @c: check char on ascii
 * Return: 1 if uppercase 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	return (0);
}
