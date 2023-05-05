#include "lists.h"

/**
 * listint_len - bring back the number of elements in a linked lists
 * @h: List of type listint_t to traverse
 * Return: nodes of number
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
