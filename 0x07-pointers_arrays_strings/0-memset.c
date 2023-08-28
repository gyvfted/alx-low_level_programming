#include "main.h"

/**
 * _memset - Fills the memory with a constant byte.
 * @s: The buffer pointed destination
 * @n: The number of bytes
 * @b: The char replace in buffer/ constant byte
 * Return: Pointer to the memory area s
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
