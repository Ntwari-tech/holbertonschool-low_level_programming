#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node
* @head: pointer
* @index: index
* Return: returns the nth node or null
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *xy = head;
	unsigned int xz = 0;

	while (xy != NULL)
	{
		if (xz == index)
			return (xy);
		xz++;
		xy = xy->next;
	}
	return (NULL);
}
