#include "lists.h"

/**
 * print_dlistint - main functio
 * dlistint_t - Pointer datatype
 * @h: pointer
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == 0)
	{
		printf("Empty list");

	}
	else
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
