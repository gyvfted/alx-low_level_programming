#include "main.h"

/**
 * _strncpy - Copies a string.
 * @src: The source string
 * @dest: The buffer storing the first string
 * @n: Number of byte
 * Return: Pointer to the resulting string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
