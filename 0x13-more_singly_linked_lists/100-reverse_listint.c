#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: First node in the list
 *
 * Return: Pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}

	*head = back;

	return (*head);
}
