#include "lists.h"
/**
* free_listint2 - set list free
* @head: pointer to start the list
*/

void free_listint2(listint_t **head)
{

	listint_t *xy;

	if (head == NULL)
		return;

	while (*head)
	{
		xy = (*head)->next;
		free(*head);
		*head = xy;
	}
	*head = NULL;
}
