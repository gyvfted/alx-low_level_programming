#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @n: print the number and char of the line
 */
void print_square(int n)
{
	int c, d;

	for (c = 0; c < n; c++)
	{
		for (d = 0; d < n; d++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
