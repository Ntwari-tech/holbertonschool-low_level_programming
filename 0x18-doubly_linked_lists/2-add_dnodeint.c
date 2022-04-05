#include "lists.h"

/**
 * add_dnodeint - + node at the begining of dlistint_t list
 * @head: [] pointer
 * @n: value of the node
 *
 * Return: * of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *xy;

	if (head == NULL)
		return (NULL);

	xy = malloc(sizeof(dlistint_t));

	if (xy == NULL)
		return (NULL);

	xy->n = n;
	xy->next = *head;
	xy->prev = NULL;
	if (*head != NULL)
		(*head)->prev = xy;
	*head = xy;

	return (xy);
}
