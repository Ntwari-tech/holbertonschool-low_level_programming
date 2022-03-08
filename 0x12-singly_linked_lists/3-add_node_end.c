#include "lists.h"
#include <string.h>

/**
* *add_node_end - adds a new node at the of list_t
* @head: pointer points to anohter pointer
* @str: string that pointed at
* Return: the address of the new element or NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *end_node;
list_t *tail;
char *y;
int len = 0;
if (head == NULL || str == NULL)
return (NULL);
end_node = malloc(sizeof(list_t));

if (end_node == NULL)
return (NULL);
y = strdup(str);
if (y == NULL)
{
free(end_node);
return (NULL);
}
while (str[len])
len++;
end_node->str = y;
end_node->len = len;
end_node->next = NULL;
if (*head == NULL)
{
*head = end_node;
}
else
{
tail = *head;
while (tail->next)
{
tail = tail->next;
}
tail->next = end_node;
}
return (end_node);
}
