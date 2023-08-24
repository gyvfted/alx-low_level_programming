#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
