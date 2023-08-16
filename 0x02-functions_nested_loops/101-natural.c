#include "stdio.h"
/**
 * main - print the sum of all multiples of 3 0r 5 upto 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}