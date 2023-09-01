#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: Character should be checked
 * Return: 1 for alphabetic character or 0 for any other thing
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
