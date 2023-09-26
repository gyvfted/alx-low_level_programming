#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: Head of the list
 * @n: Data to insert in the new element
 *
 * Return: Pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *last = *head;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);

	first->n = n;
	first->next = NULL;

	if (*head == NULL)
	{
		*head = first;
		return (first);
	}

	while (last->next)
		last = last->next;

	last->next = first;

	return (first);
}
