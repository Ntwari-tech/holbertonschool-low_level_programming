#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: is the pointer
* @idx: the node
* @n: variable
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nx;
	listint_t *ty = *head;
	unsigned int len = 0;

	if (*head == NULL)
		return (NULL);

	nx = malloc(sizeof(listint_t));
	if (nx == NULL)
		return (NULL);
	nx->n = n;

	if (idx == 0)
	{
	nx->next = ty;
	*head = ty;
	return (nx);
	}

	while (len < idx - 1)
	{
		if (ty->next == NULL)
			return (NULL);
		ty = ty->next;
		len++;
	}
	nx->next = ty->next;
	ty->next = nx;
	return (nx);
}
