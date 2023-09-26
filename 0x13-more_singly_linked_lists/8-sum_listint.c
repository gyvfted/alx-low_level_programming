#include "lists.h"

/**
 * sum_listint - Cal the sum of all the data in a listint_t list
 * @head:  Head of the linked list
 *
 * Return: Sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
