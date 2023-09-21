#include "lists.h"

/**
 * list_len - Returns then number of elements in a list
 * @h: Pointer to the list_t list
 * Return: The number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
