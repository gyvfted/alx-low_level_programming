#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number of the last digit should be printed
 *
 * Return: Value of the last digit number.
 */

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
n = -n;
}
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
