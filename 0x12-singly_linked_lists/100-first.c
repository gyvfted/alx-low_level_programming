#include <stdio.h>
void __attribute__ ((constructor)) bmain()
/**
 * first - prints a sentence before the main
 * function is to be executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
