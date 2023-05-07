#include "lists.h"

/**
 * sum_listint - the sum of all the data in a listint_t list are calculated
 * @head: the first node in the linked list
 * Return: sum are resulting
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
