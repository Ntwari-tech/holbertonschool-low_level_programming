#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of listint_t
* @head: a pointer
* @n: data for the node we are adding
* Return: * of element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y;

	y = (listint_t *)malloc(sizeof(listint_t));

	if (y == NULL)
	{
		return (NULL);
	}

	y->n = n;
	y->next = NULL;

	if (*head == NULL)
	{
		*head = y;
	}

	else
	{

	x = *head;
	while (x->next != NULL)
	x = x->next;
	x->next = y;
	}
	return (y);
}
