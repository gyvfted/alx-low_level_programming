#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: Number should be computed.
 * Return: Absolute value of number or Zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_n;
abs_n = c * -1;
return (abs_n);
}
return (c);
}
