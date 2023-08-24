#include "main.h"

/**
 * _strncat - appends the src string to the dest
 * @src: First string is src
 * @dest: Second string is dest
 * @n: The number of byte
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int size = 0, i = 0;

	while (dest[i] != '\0')
	{
		size++;
		i++;
	}
	i = 0;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[size++] = src[i];
	}
	dest[size] = '\0';
	return (dest);
}
