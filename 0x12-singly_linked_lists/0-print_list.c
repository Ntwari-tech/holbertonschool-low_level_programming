#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_list - prints all elements.
* @h: pointer
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{

size_t nodes = 0;

while (h != NULL)
{
if (h->str != NULL)
{

printf("[%d] %s\n", h->len, h->str);
}
else
{

printf("[0] (nil)\n");
}
nodes++;
h = h->next;
}
return (nodes);
}
