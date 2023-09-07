#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each byte element
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;

	return (pointer);
}
