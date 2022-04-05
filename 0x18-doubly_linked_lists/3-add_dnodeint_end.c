#include "lists.h"

/**
 * add_dnodeint_end - + new node @ the end of a  dlistint_t list
 * @head: [] pointer
 * @n: node = n
 *
 * Return: *add new lment
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x, *y = *head;

	if (head == NULL)
		return (NULL);

	x = malloc(sizeof(dlistint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		x->prev = NULL;
		*head = x;
		return (x);
	}

	while (y->next != NULL)
		y = y->next;

	x->prev = y;
	y->next = x;

	return (x);
}
