#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Head of the list
 *
 * Return: The head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int digit;

	if (!head || !*head)
		return (0);

	digit = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (digit);
}
