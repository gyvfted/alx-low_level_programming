#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination where memory is stored
 * @n: Number of bytes
 * @src: source where memory is copied
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
