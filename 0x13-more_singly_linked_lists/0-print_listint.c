	#include "lists.h"

/**
 * print_listint - Characters of a linked list are state
 * @h: Titles of the points
 *
 * Return: The list of nodes of integers
 */
size_t print_listint(const listint_t *h)
{
	size_t ncount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ncount ++;
	}
	return (ncount);
}
