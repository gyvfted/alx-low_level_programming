#include "main.h"

/**
 * _strstr - Locates a substring
 * @needle: The substring
 * @haystack: The string
 * Return: Pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	int j = 0;
	int k;

	while (haystack[i] != '\0')
	{
		if (needle[0] == haystack[i])
		{
			for (k = i; needle[j] != '\0'; k++)
			{
				if (needle[j] != haystack[k])
				{
					break;
				}
				j++;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
