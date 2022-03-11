#include "lists.h"

/**
* listint_len returns the number of lment
* @h: pointer
* Return: returns find 
*/

size_t listint_len(const listint_t *h)
{
	int find = 0;

	while (h != NULL)
	{
		h = h->next;
		find++;
	}
return (find);
}
