	#include "lists.h"

/**
 * print_listint - Characters of a linked list are state
 * @h: Titles of the points
 *
 * Return: The list of nodes of integers
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
