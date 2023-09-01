#include "main.h"
#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
