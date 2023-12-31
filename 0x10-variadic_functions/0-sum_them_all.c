#include "variadic_functions.h"

/**
 * sum_them_all - The sum of all its paramters
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to calculate the sum
 * Return: If n == 0 - 0
 * Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
