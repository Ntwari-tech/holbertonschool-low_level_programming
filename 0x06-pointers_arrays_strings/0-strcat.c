#include "holberton.h"

/**
 * _strcat- concatentating two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
int x = 0;
int y;

for (; dest[x] != '\0'; x++)
continue;

for (y = 0; src[y] != '\0'; y++)
{

dest[x] = src[y];
x++;

}
dest[x] = '\0';
return (dest);
}
