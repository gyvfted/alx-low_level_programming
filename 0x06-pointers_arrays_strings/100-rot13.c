#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: The string to be encoded
 * Return: The encoded string
 */

char *rot13(char *str)
{
	char *letter = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char *letter13 = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = letter13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
