#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: head node
 * @n: int argument
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        /* declarations */
        dlistint_t *new;

        new = malloc(sizeof(dlistint_t));

        if (new == NULL)
                return (NULL);

        new->n = n;
        new->prev = NULL;
        new->next = *head;

        if (*head != NULL)
                (*head)->prev = new;
        *head = new;

        return (new);
}
