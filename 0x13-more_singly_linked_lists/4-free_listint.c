#include "lists.h"

/**
* free_listint - sets list free
* @head: a pointer
*
*/

void free_listint(listint_t *head)
{
	listint_t *xy;

	while (head != NULL)
	{
		xy = head->next;
		free(head);
		head = xy;
	}
}
