#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list
 * @head: pointer
 *
 *Return: no return value
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	head = head->next;
	while (head != NULL)
	{
		free(head->prev);
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		head = head->next;
	}
}
