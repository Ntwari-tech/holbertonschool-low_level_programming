#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node
* @head: a pointer to the head of the linked list
* @index: the position of node to be updated
* Return: returns
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *xy = *head;
	listint_t *y = *head;

	if (*head == NULL)
	  return (-1);

	if (index == 0)
	{
		*head = xy->next;
		free(xy);
		xy = NULL;
		return (1);
	}
	else
	{
		while (index != 1)
		{
			y = xy;
			xy = xy->next;
			index--;
		}
		y->next = xy->next;
		free(xy);
		xy = NULL;
	}
	return (1);
}
