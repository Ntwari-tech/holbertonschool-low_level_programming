#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: [] pointer
 *
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t *p;

	if (head == NULL)
		return (-1);

	p = *head;

	for (x = 0; x < index && p != NULL; x++)
		p = p->next;

	if (p == NULL)
		return (-1);

	if (p->prev != NULL)
		p->prev->next = p->next;
	else
		*head = p->next;

	if (p->next != NULL)
		p->next->prev = p->prev;

	free(p);

	return (1);
}
