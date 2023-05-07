#include "lists.h"
/**
 * insert_nodeint_at_index - a new node adds to the linked list
 *                           at a given position
 * @head : point the head of the list
 * @idx  : the index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : the value for the new node to  add
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = temp;
*head = new;
return (new);
}

for (node = 0; node < (idx - 1); node++)
{
if (temp == NULL || temp->next == NULL)
return (NULL);

temp = temp->next;
}

new->next = temp->next;
temp->next = new;

return (new);
}
