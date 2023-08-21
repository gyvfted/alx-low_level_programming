#include "main.h"
/**
 * print_array - prints n elements of an array of integers.
 * @a: Array of integers
 * @n: The number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n ; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
			printf(", ");
	}
	printf("\n");
}
