#include <stdio.h>
#include <math.h>
/**
 * main - prints the numbers from 1 to 100
 * Return: 0
 */
int main(void)
{
	long int a, b, c = -1;

	a = 612852475143;
	if (a % 2 == 0)
	{
		c = 2;
		while (a % 2 == 0)
			a /= 2;
	}
	for (b = 3; b <= sqrt(a); b += 2)
	{
		while (a % b == 0)
		{
			c = b;
			a = a / b;
		}
	}
	if (a > 2)
		c = a;
	printf("%ld\n", c);
	return (0);
}
