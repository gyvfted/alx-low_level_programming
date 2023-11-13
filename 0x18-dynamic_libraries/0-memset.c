#include "main.h"

#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: The memory area.
 * @b: The constant byte.
 * @n: The number of bytes filled.
 * Return: Pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
