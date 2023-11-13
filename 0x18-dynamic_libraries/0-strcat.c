#include "main.h"

/**
 * _strcat - Attach the src string to the dest string
 * @src: The first string
 * @dest: The second string
 * Return: Return value to destination
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
