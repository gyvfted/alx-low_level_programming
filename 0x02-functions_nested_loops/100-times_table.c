#include "main.h"
#include "stdio.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: Starting from 0
 * Return: value of the time table to be printed
 */

void print_times_table(int n)
{
	int a, b, prod;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			prod = a * b;
			if (b != 0)
				_putchar(' ');
			if (prod >= 100)
			{
				_putchar('0' + prod / 100);
				_putchar('0' + (prod / 10) % 10);
				_putchar('0' + (prod % 100) % 10);
			}
			else if (prod >= 10)
			{
				_putchar(' ');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			else
			{
				if (b != 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0' + prod);
			}
			if (b == n)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
