#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array of integer
 * @size: size of the array.
 * @cmp: Pointer to the function to be used
 * to compare values
 * Return: index of the first eement for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
