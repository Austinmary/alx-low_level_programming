#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: head of list
 * @idx: the index
 * @n: the int to put into the new node
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* declarations */
	dlistint_t *location, *new = *h;
	/* unsigned int counter = 0 */

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (location == NULL)
			return (NULL);
		location = location->next;
	}

	if (location->next == NULL)
		return (add_dndeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = location->next;
	new->prev = location;
	location->next->prev = new;
	location->next = new;

	return (new);
}
