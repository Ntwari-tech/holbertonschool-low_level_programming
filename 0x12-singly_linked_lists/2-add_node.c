#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* *add_node - add a new node at the beggining
* @str: string
* @head: pointer
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *added_node;
char *x;
int len = 0;

if (head == NULL || str == NULL)
return (NULL);

added_node = malloc(sizeof(list_t));

if (added_node == NULL)
return (NULL);

x = strdup(str);
if (x == NULL)
{
free(added_node);
return (NULL);
}
while (str[len])
len++;

added_node->str = x;
added_node->len = len;
added_node->next = *head;

*head = added_node;

return (added_node);
}
