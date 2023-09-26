#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: Head of the list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
