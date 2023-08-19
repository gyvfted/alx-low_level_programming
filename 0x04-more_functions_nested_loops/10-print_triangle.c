#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int c, d;

	for (c = 1; c <= size; c++)
	{
		for (d = 0; d < size - c; d++)
			_putchar(' ');
		for (d = 1; d <= c; d++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
