#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number of the unsigned long int
 * @index: Index of the bit
 *
 * Return: The value of the bit at index,
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
