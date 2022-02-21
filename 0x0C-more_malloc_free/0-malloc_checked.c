#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - allocates memory
* @b: unsigned int
* Return: returns a *p
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
return (ptr);
}
