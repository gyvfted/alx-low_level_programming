#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared 
 * Return: Differnce between the first unmatching char
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;
	int k;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			k = s1[i];
			j = s2[i];
			return (k - j);
		}
		i++;
	}
	if (s1[i] != '\0')
	{
		k = s1[i];
		return (k);
	}
	else
	{
		j = s2[i];
		return (-j);
	}
}
