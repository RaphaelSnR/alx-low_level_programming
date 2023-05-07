#include "lists.h"

/**
 * free_listint - A free linked list
 * @head: the list of head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
