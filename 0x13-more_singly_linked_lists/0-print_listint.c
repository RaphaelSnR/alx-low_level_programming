#include "lists.h"

/**
 * print_listint - states all the elements of a listed linked
 * @h: linked list of type listint_t to print
 * Return: nodes of numbers
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
