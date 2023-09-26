#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
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
