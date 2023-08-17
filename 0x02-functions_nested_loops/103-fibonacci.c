#include <stdio.h>

/**
 * main - Print the sum of even Fibonacci numbers up to a fib value
 * less than 4,000,000.
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, sum = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += j;
		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", sum);
	return (0);
}
