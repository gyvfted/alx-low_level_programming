#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords for the program
 * Return - 0
 */

int main(void)
{
	int i = 0, j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		j = j + i;
		printf("%c", j);
	}
	printf("%c\n", (2772 - i));
	return (0);
}
