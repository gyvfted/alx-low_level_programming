#include "main.h"

/**
 *_strspn - Gets the length of a prefix substring
 * @s: The initial segment
 * @accept: The Substring in accepted bytes
 * Return: The number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j, exist = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				exist = 1;
			j++;
		}
		if (exist == 0)
			break;
		i++;
		exist = 0;
	}
	return (i);
}
