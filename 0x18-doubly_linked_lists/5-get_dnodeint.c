#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head of list to search
 * @index: index to grab
 *
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int y;

	for (y = 0; y < index && head != NULL; y++)
		head = head->next;

	return (head);
}
