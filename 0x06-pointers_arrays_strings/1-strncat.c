#include "holberton.h"

/**
* _strncat -main function
* @dest: variable
* @src:  variable
*@n: variable
* Return:dest
*/

char *_strncat(char *dest, char *src, int n)

{
int dest_len;
int i;

/*sets dest_len to the length of dest */

for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
{}
/*  sets all of src[i] into dest[dest_len]*/
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
{
/*adds in the null byte at the end of dest */
dest[dest_len + i] = '\0';
/* return dest*/
return (dest);
}
}
