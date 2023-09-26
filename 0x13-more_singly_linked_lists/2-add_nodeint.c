#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Head of a list
 * @n: Data to insert in that new node
 *
 * Return: Pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	new = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);

	first->n = n;
	first->next = *head;
	*head = first;

	return (first);
}
