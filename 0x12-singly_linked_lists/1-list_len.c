#include "lists.h"

/**
* list_len - returns the number of elements
* @h: is out pointer
*
* Return: find
*/

size_t list_len(const list_t *h)
{

size_t find  = 0;

while (h != NULL)

{
find++;
h = h->next;
}
return (find);
}
