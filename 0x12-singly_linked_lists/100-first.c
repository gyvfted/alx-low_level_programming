#include <stdio.h>

/**
 * first - prints a sentence before the main
 * function is to be executed
 */
void __attribute__ ((constructor)) bmain()
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
