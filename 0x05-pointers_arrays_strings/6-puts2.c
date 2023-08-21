#include "main.h"
/**
 * puts2 - prints a string
 * @str: The string to print
 * Return: void
 */
void puts2(char *str)
{
	int size;

	for (size = 0; *str++; size++)
	{
		if (size % 2 == 0)
			_putchar(*(str - 1));
	}
	_putchar('\n');
}
