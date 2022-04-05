#include "lists.h"

/**
 * dlistint_len - rtns  dlistint length
 *
 * @h: pointer
 *
 * Return: find
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t find = 1;
	dlistint_t *p;

	if (h == NULL)
		return (0);

	p = h->next;
	while (p != NULL)
	{
		find++;
		p = p->next;
	}

	return (find);
}
