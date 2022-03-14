#include "lists.h"

/**
* pop_listint - erases 1st node list
* @head: pointer
* Return: if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (*head == NULL)

		return (0);

	x = *head;
	y = x->n;
	*head = x->next;

	free(x);

	return (y);
}
