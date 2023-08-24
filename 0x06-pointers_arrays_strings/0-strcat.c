#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @src: First src string
 * @dest: second dest string
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int size = 0, i = 0;

	while (dest[i] != '\0')
	{
		size++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[size++] = src[i++];
	}
	dest[size] = '\0';
	return (dest);
}
