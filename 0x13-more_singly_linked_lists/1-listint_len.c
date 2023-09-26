#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: Head of the list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t digit = 0;

	while (h)
	{
		digit++;
		h = h->next;
	}

	return (digit);
}
