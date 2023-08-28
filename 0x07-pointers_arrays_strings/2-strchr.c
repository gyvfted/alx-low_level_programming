#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The buffer/ Source of location
 * @c: The character to be located
 * Return: pointer to the first occurrence of the char c, or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0, exist = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			exist = 1;
			break;
		}
		i++;
	}
	if (exist || c == '\0')
		return (s + i);
	return (NULL);
}
