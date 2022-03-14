#include "lists.h"

/**
* sum_listint -  returns the sum of all the data
* @head: a pointer
* Return: if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{

	int add = 0;

	if (!head)
		return (0);

	while (head)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
