#include "lists.h"

/**
 * add_nodeint - a node adds to the beginning of a linked list
 * @head: point to the head of the list
 * @n: inter variable to be used as content
 *
 * Return: the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
