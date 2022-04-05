#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer
 *
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t find = 1;
	dlistint_t *p;

	if (h == NULL)
		return (0);

	p = h->next;
	printf("%d\n", h->n);

	while (p != NULL)
	{
		printf("%d\n", p->n);
		find++;
		p = p->next;
	}

	return (find);
}
