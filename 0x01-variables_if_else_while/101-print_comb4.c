#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}

				k++;

				if (k > 9)
				{
					k = ++j + 1;
				}
			}
		}

		i++;
		j = i + 1;
		k = j + 1;

		if (i <= 7)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
