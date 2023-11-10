#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the list to free
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
