#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: Character to be checked
 * Return: 1 for lowercase character or 0 for others
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
