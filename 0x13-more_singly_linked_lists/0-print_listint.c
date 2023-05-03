	#include "lists.h"

/**
 * print_listint - Characters of a linked list are state
 * @h: Titles to the head of the list
 *
 * Return: The number of list of the nodes
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
