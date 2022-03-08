#include "lists.h"
#include <stdlib.h>

/**
* free_list - freez a list_t list
* @head: pointer
*
*
*Return: void
*/

void free_list(list_t *head)

{

list_t *xy;
while (head)

{
xy = head->next;
free(head->str);
free(head);
head = xy;

}
}
