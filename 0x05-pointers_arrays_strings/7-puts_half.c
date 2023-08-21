#include "main.h"
/**
 * puts_half - prints half of a string
 * @str:the string to print
 * Return: void
 */
void puts_half(char *str)
{
	int size = 0, c;

	while (str[size] != '\0')
		size++;
	c = (size) / 2;
	if (size % 2 != 0)
		c += 1;
	for (; c < size; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
