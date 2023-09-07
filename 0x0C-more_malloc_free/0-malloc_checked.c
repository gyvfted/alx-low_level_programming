#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
