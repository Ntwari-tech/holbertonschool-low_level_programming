#include "main.h"

/**
* _memcpy - main function
*@dest: string
*@src: string
*@n: varible
* Return: (s)
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
