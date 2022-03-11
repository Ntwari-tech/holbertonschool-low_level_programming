#include "lists.h"
/**
* add_nodeint - adds a new node
* @head: pointer
* @n: variable 
* Return: the addy of new lment / NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *xy;

	xy  = malloc(sizeof(listint_t));

	if (xy == NULL)
	{
		return (NULL);
	}

	xy->n = n;
	xy->next = *head;

	*head = xy;

	return (xy);
}
