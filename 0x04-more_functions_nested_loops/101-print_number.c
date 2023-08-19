#include "main.h"

/**
 * print_number - prints the integer
 * @n: numbers should be printed
 */
void print_number(int n)
{
	unsigned int rec;

	rec = n;
	if (n < 0)
	{
		_putchar(45);
		rec = -rec;
	}
	if (rec / 10)
		print_number(rec / 10);
	_putchar('0' + rec % 10);
}
