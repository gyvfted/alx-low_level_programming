#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:the number of times the char \ should be printed
 */
void print_diagonal(int n)
{
	int c, d;

	for (c = 0; c < n; c++)
	{
		for (d = 0; d < c; d++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
