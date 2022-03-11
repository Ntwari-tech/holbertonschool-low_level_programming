#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - prints elements
* @h: pointer
* Return: returns find
*/

size_t print_listint(const listint_t *h)
{
	size_t find = 0;
	const listint_t *xy = h;

	while (xy != NULL)
	{
		printf("%d\n", xy->n);
		find++;
		xy = xy->next;
	}
	return (find);
}
