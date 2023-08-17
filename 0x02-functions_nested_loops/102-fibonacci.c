#include <stdio.h>
/**
 * main - Print the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int count = 2;
	long int a = 1, b = 2;
	long int c;

	printf("%lu, ", a);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}

		c = b;
		b += a;
		a = c;
		count++;
	}

	return (0);
}

