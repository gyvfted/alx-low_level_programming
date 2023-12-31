#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @n: The number of integers passed to the function
 * @separator: Separator string between two numbers
 * @...: A variable number of numbers to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
