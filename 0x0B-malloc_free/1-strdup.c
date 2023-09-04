#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Duplicate to new memory space location
 * @str: The source string
 * Return: Returns a pointer to the copy string.
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	aaa = (char *)malloc((sizeof(char) * length) + 1);
	if (aaa == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		aaa[i] = str[i];
	aaa[length] = '\0';

	return (aaa);
}
