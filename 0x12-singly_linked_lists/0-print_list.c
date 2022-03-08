#include "lists.h"

/**
* print_list - prints all elements.
* @h: pointer
*
* Return: the number of nodes
*
*/

print_lissize_t print_list(const list_t *h)
{
int find;
if (h == NULL)
return (0);

for (find = 0; h != NULL; h = h->next, find++)
{
if (h->str == NULL)
printf("[%i] %s\n", 0, "(nil)");
else
printf("%i %s\n", h->len, h->str);
}
return (find);
}
