#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: The string to print
 * Return: void
 */
void rev_string(char *s)
{
	int size, c, d;
	char b;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}

	for (c = size - 1, d = 0; c >= (size) / 2; c--, d++)
	{
		b = s[c];
		s[c] = s[d];
		s[d] = b;
	}
}
