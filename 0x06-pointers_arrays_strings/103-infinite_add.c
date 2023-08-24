#include "main.h"

/**
* reverse - Reverses the array
* @r: The array
* @n: Size of array
* Return: A reversed array
*/

char *reverse(char *r, int n)
{
	int j, temp;

	for (j = 0; j < n; n--, j++)
	{
		temp = r[n];
		r[n] = r[j];
		r[j] = temp;
	}
	return (r);
}

/**
 * infinite_add - Adds two numbers together
 * @n1: First number to be added
 * @n2: Second number to be added
 * @r: The buffer that the function will use to store the result
 * @size_r: The buffer size
 * Return: Pointer to the calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size1 = 0, size2 = 0, k, rest = 0, n;

	while (n1[size1] != '\0')
		size1++;
	while (n2[size2] != '\0')
		size2++;
	if (size2 > size_r || size1 > size_r)
		return (0);
	for (size1 -= 1, size2 -= 1, k = 0; k < size_r - 1; size1--, size2--, k++)
	{
		n = rest;
		if (size1 < 0 && size2 < 0 && n == 0)
			break;
		if (size1 >= 0)
			n += n1[size1] - 48;
		if (size2 >= 0)
			n += n2[size2] - 48;
		rest = n / 10;
		r[k] = n % 10 + 48;
	}
	r[k] = '\0';
	if (rest || size1 >= 0 || size2 >= 0)
		return (0);
	return (reverse(r, k - 1));
}
