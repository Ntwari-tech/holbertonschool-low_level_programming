
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: deletes from head
 * @index: how much to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *y;
	listint_t *z;

	if (head == NULL)
		return (-1);

	z = *head;

	if (index == 0 && *head != NULL)
	{
		*head = z->next;
		free(z);
		return (1);
	}

	for (x = 0; z != NULL && x < index - 1; x++)
		z = z->next;

	if (z == NULL)
		return (-1);

	y = z->next;
	z->next = z->next->next;
	free(y);

	return (1);
}
