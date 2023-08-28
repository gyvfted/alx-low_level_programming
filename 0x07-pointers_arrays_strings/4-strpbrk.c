#include "main.h"

/**
 *_strpbrk - Searches a string for any of a set of bytes
 * @s: The buffer
 * @accept: The substring
 * Return: Pointer to the byte in s that matches one of the bytes
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
